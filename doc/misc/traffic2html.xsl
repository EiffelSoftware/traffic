<?xml version="1.0"?>

<xsl:stylesheet
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
	xmlns="http://www.w3.org/1999/xhtml"
	xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:gexslt="http://www.gobosoft.com/eiffel/gobo/gexslt/extension"
	xmlns:trafficdoc="http://www.gobosoft.com/eiffel/gobo/documentation"
	gexslt:explain="no"
	exclude-result-prefixes="xs gexslt trafficdoc"
	version="2.0">

<!-- CONSTANTS set by build.eant-->
<xsl:param name="previous"/>
<xsl:param name="next"/>
<xsl:param name="current_file"/>
<xsl:param name="doc_section"/>
<xsl:param name="is_index"/>
<xsl:param name="root_path">
  <xsl:choose>
    <xsl:when test="@root_path">
      <xsl:value-of select="@root_path"/>
    </xsl:when>  
    <xsl:otherwise>../</xsl:otherwise>
  </xsl:choose>
</xsl:param>
<!-- CONSTANTS -->
<xsl:param name="images" select="concat($root_path,'misc/image/')"/>
<xsl:param name="srcdoc" select="concat($root_path,'src/')"/>
<xsl:param name="toc" select="'index.html'"/>
<xsl:param name="web" select="'http://wiki.se.ethz.ch/traffic'"/>

<xsl:output
	method="xhtml"
	indent="yes"
	gexslt:indent-spaces="1"
	gexslt:byte-order-mark="no"
	gexslt:character-representation="entity;decimal"
	version="1.0"
	include-content-type="yes"
	omit-xml-declaration="no"
	encoding="ISO-8859-1"
	doctype-public="-//W3C//DTD XHTML 1.1//EN"
	doctype-system="http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd"
   />

<xsl:template match="trafficdoc:anchor">
	<a>
		<xsl:attribute name="id">
			<xsl:value-of select="@id"/>
		</xsl:attribute>
	</a>
	<xsl:apply-templates/>
</xsl:template>

<xsl:template match="trafficdoc:blockquote">
	<blockquote>
		<xsl:apply-templates/>
	</blockquote>
</xsl:template>

<xsl:template match="trafficdoc:chapter">
	<html xml:lang="en">
	<head>
		<title>
			<xsl:value-of select="trafficdoc:title"/>
		</title>
		<link rel="stylesheet" type="text/css" href="{$root_path}misc/style.css" />
	</head>
	<body>
		<xsl:apply-templates select="." mode="header"/>
		<div id="content">
		<xsl:apply-templates select="trafficdoc:variablelist|trafficdoc:itemizedlist|trafficdoc:orderedlist|trafficdoc:para|trafficdoc:programlisting|trafficdoc:section|trafficdoc:synopsis|trafficdoc:table"/>
		</div>
		<xsl:apply-templates select="." mode="footer"/>
	</body>
	</html>
</xsl:template>

<xsl:template match="trafficdoc:chapter" mode="header">
	<table class="header_table">
	<tr>
		<td class="logo">
			<a href="{$web}">
				<img src="{$images}traffic_logo.png" alt="Home"/>
			</a>
		</td>
		<td class="left_bottom">
			<h1><xsl:value-of select="trafficdoc:title"/></h1>
		</td>
		<td class="right_bottom">
			<!-- NAVBAR -->
			<xsl:call-template name="navbar"/>
		</td>
	</tr>
	<tr>
		<td colspan="3">
			<!-- LINKBAR -->
			<xsl:call-template name="linkbar"/>
		</td>
	</tr>
	</table>
</xsl:template>



<xsl:template match="trafficdoc:chapter" mode="footer">
	<table class="footer_table">
	<tr>
		<td colspan="3">
			<!-- LINKBAR -->
			<xsl:call-template name="linkbar"/>
		</td>
	</tr>
	<tr>
		<td>
			<address>
					<xsl:apply-templates select="trafficdoc:chapterinfo/trafficdoc:copyright" mode="footer"/>
					<br/>
					<xsl:apply-templates select="trafficdoc:chapterinfo/trafficdoc:email" mode="footer"/>
					<br/>
					<a>
						<xsl:attribute name="href">
							<xsl:value-of select="$web"/>
						</xsl:attribute>
						<xsl:value-of select="$web"/>
					</a>
					<br/>
					<xsl:apply-templates select="trafficdoc:chapterinfo/trafficdoc:date" mode="footer"/>
			</address>
		</td>
		<td align="right" valign="top">
			<!-- NAVBAR -->
               <xsl:call-template name="navbar"/>
		</td>
	</tr>
	</table>
</xsl:template>

<xsl:template name="linkbar">
	<table class="linkbar_table">
	<tr>
		<td class="linkbar" colspan="3">

			<a class="linkbar">
				<xsl:attribute name="href">
					<xsl:value-of select="concat($root_path,'index.html')"/>
				</xsl:attribute>
				<xsl:text>INDEX</xsl:text>
			</a>
			<xsl:choose>
				<xsl:when test="$is_index=''">
					<xsl:text> >> </xsl:text>
					<a  class="linkbar">
						<xsl:if test="not($toc=concat($current_file,'.html'))">
							<xsl:attribute name="href">
								<xsl:value-of select="$toc"/>
							</xsl:attribute>
						</xsl:if>
						<xsl:if test="$doc_section">
							<xsl:value-of select="$doc_section"/>
						</xsl:if>
						<xsl:if test="not($doc_section)">
							<xsl:value-of select="trafficdoc:title"/>
						</xsl:if>
					</a>
				</xsl:when>
			</xsl:choose>
			<xsl:choose>
				<xsl:when test="trafficdoc:title!=''">
					<xsl:text> >> </xsl:text>
						<xsl:choose>
							<xsl:when test="$current_file='index'">
								     <xsl:text>Overview</xsl:text>
							</xsl:when>
							<xsl:otherwise>
								<xsl:if test="contains(trafficdoc:title, ':')">
									<xsl:value-of select="substring-after(trafficdoc:title, ':')"/>
								</xsl:if>
								<xsl:if test="not(contains(trafficdoc:title, ':'))">
									<xsl:value-of select="$current_file"/>
								</xsl:if>
							</xsl:otherwise>
						</xsl:choose>
				</xsl:when>
			</xsl:choose>
		</td>
	</tr>
	</table>
</xsl:template>

<xsl:template name="navbar">
			<xsl:choose>
				<xsl:when test="$previous=concat($current_file,'.html')">
					<img src="{$images}no_previous.gif" alt=""/>
				</xsl:when>
				<xsl:when test="$previous!=''">
					<a>
						<xsl:attribute name="href">
							<xsl:value-of select="$previous"/>
						</xsl:attribute>
						<img src="{$images}previous.gif" alt="Previous"/>
					</a>
				</xsl:when>
			</xsl:choose>
			<xsl:choose>
				<xsl:when test="$next=concat($current_file,'.html')">
					<img src="{$images}no_next.gif" alt=""/>
				</xsl:when>
				<xsl:when test="$next!=''">
					<a>
						<xsl:attribute name="href">
							<xsl:value-of select="$next"/>
						</xsl:attribute>
						<img src="{$images}next.gif" alt="Next"/>
					</a>
				</xsl:when>
			</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:citetitle">
	<i><xsl:apply-templates/></i>
</xsl:template>

<xsl:template match="trafficdoc:classname">
	<xsl:choose>
		<xsl:when test="@cluster">
			<a>
				<xsl:attribute name="class">
					<xsl:text>class-name</xsl:text>
				</xsl:attribute>
				<xsl:attribute name="href">
					<xsl:value-of select="$srcdoc"/>
					<xsl:value-of select="translate(@cluster,'ABCDEFGHIJKLMNOPQRSTUVWXYZ.','abcdefghijklmnopqrstuvwxyz/')"/>
					<xsl:text>/</xsl:text>
					<xsl:value-of select="translate(.,'ABCDEFGHIJKLMNOPQRSTUVWXYZ.','abcdefghijklmnopqrstuvwxyz/')"/>
					<xsl:text>.html</xsl:text>
				</xsl:attribute>
				<xsl:apply-templates/>
<!--				<img src="{$images}external.gif" alt=""/> -->
			</a>
		</xsl:when>
		<xsl:otherwise>
			<span>
				<xsl:attribute name="class">
					<xsl:text>class-name</xsl:text>
				</xsl:attribute>
				<xsl:apply-templates/>
			</span>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:classname" mode="listing">
	<span>
		<xsl:attribute name="class">
			<xsl:text>class-name</xsl:text>
		</xsl:attribute>
		<xsl:apply-templates mode="listing"/>
	</span>
</xsl:template>

<xsl:template match="trafficdoc:classname" mode="inline">
	<span>
		<xsl:attribute name="class">
			<xsl:text>class-name</xsl:text>
		</xsl:attribute>
		<xsl:apply-templates mode="inline"/>
	</span>
</xsl:template>

<xsl:template match="trafficdoc:comment">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:comment" mode="listing">
	<font color="#008000"><tt><xsl:text>-- </xsl:text><xsl:apply-templates mode="listing"/></tt></font>
</xsl:template>

<xsl:template match="trafficdoc:comment" mode="inline">
	<font color="#008000"><tt><xsl:text>-- </xsl:text><xsl:apply-templates mode="inline"/></tt></font>
</xsl:template>

<xsl:template match="trafficdoc:compound">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:compound" mode="listing">
	<xsl:for-each select="trafficdoc:*">
		<xsl:apply-templates select="." mode="indent"/>
		<xsl:apply-templates select="." mode="listing"/>
		<xsl:if test="position()!=last()">
			<xsl:call-template name="newline"/>
		</xsl:if>
	</xsl:for-each>
</xsl:template>

<xsl:template match="trafficdoc:compound" mode="inline">
	<xsl:for-each select="trafficdoc:*">
		<xsl:apply-templates select="." mode="indent"/>
		<xsl:apply-templates select="." mode="inline"/>
		<xsl:if test="position()!=last()">
			<xsl:call-template name="newline"/>
		</xsl:if>
	</xsl:for-each>
</xsl:template>

<xsl:template match="trafficdoc:constructname">
	<tt><xsl:apply-templates/></tt>
</xsl:template>

<xsl:template match="trafficdoc:copyright" mode="footer">
	<b>
	<xsl:text>Copyright &#169; </xsl:text>
	<xsl:for-each select="trafficdoc:year">
		<xsl:apply-templates/>
		<xsl:text>, </xsl:text>
	</xsl:for-each>
	<xsl:for-each select="trafficdoc:holder">
		<xsl:apply-templates/>
		<xsl:if test="position()!=last()">
			<xsl:text>, </xsl:text>
		</xsl:if>
	</xsl:for-each>
	</b>
</xsl:template>

<xsl:template match="trafficdoc:date" mode="footer">
	<b><xsl:text>Last Updated: </xsl:text></b>
	<xsl:apply-templates/>
</xsl:template>

<xsl:template match="trafficdoc:email" mode="footer">
	<b><xsl:text>mailto:</xsl:text></b>
	<a>
		<xsl:attribute name="href">
			<xsl:text>mailto:</xsl:text>
			<xsl:apply-templates/>
		</xsl:attribute>
		<xsl:apply-templates/>
	</a>
</xsl:template>

<xsl:template match="trafficdoc:emphasis">
	<i><xsl:apply-templates/></i>
</xsl:template>

<xsl:template match="trafficdoc:entry" mode="tbody">
	<td><xsl:apply-templates/></td>
</xsl:template>

<xsl:template match="trafficdoc:entry" mode="tfoot">
	<td><xsl:apply-templates/></td>
</xsl:template>

<xsl:template match="trafficdoc:entry" mode="thead">
	<td><xsl:apply-templates/></td>
</xsl:template>

<xsl:template match="trafficdoc:equal">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:equal" mode="listing">
	<xsl:for-each select="trafficdoc:expression">
		<xsl:if test="position()=1">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:if>
	</xsl:for-each>
	<tt><xsl:text> = </xsl:text></tt>
	<xsl:for-each select="trafficdoc:expression">
		<xsl:if test="position()=last()">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:if>
	</xsl:for-each>
</xsl:template>

<xsl:template match="trafficdoc:equal" mode="inline">
	<xsl:for-each select="trafficdoc:expression">
		<xsl:if test="position()=1">
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:if>
	</xsl:for-each>
	<tt><xsl:text> = </xsl:text></tt>
	<xsl:for-each select="trafficdoc:expression">
		<xsl:if test="position()=last()">
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:if>
	</xsl:for-each>
</xsl:template>

<xsl:template match="trafficdoc:expression">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:expression" mode="listing">
	<xsl:apply-templates select="trafficdoc:*" mode="listing"/>
</xsl:template>

<xsl:template match="trafficdoc:expression" mode="inline">
	<xsl:apply-templates select="trafficdoc:*" mode="inline"/>
</xsl:template>

<xsl:template match="trafficdoc:featurecall">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:featurecall" mode="listing">
	<xsl:if test="trafficdoc:target">
		<xsl:apply-templates select="trafficdoc:target" mode="listing"/>
		<tt><xsl:text>.</xsl:text></tt>
	</xsl:if>
	<xsl:apply-templates select="trafficdoc:featurename" mode="listing"/>
	<xsl:if test="trafficdoc:arguments">
		<tt><xsl:text> (</xsl:text></tt>
		<xsl:for-each select="trafficdoc:arguments/*">
			<xsl:apply-templates select="." mode="listing"/>
			<xsl:if test="position()!=last()">
				<tt><xsl:text>, </xsl:text></tt>
			</xsl:if>
		</xsl:for-each>
		<tt><xsl:text>)</xsl:text></tt>
	</xsl:if>
</xsl:template>

<xsl:template match="trafficdoc:featurecall" mode="inline">
	<xsl:if test="trafficdoc:target">
		<xsl:apply-templates select="trafficdoc:target" mode="inline"/>
		<tt><xsl:text>.</xsl:text></tt>
	</xsl:if>
	<xsl:apply-templates select="trafficdoc:featurename" mode="inline"/>
	<xsl:if test="trafficdoc:arguments">
		<tt><xsl:text> (</xsl:text></tt>
		<xsl:for-each select="trafficdoc:arguments/*">
			<xsl:apply-templates select="." mode="inline"/>
			<xsl:if test="position()!=last()">
				<tt><xsl:text>, </xsl:text></tt>
			</xsl:if>
		</xsl:for-each>
		<tt><xsl:text>)</xsl:text></tt>
	</xsl:if>
</xsl:template>

<xsl:template match="trafficdoc:featurename">
	<xsl:choose>
	    <xsl:when test="@class">
	    	<a>
				<xsl:attribute name="class">
					<xsl:text>feature-name</xsl:text>
				</xsl:attribute>
				<xsl:attribute name="href">
					<xsl:value-of select="$srcdoc"/>
					<xsl:value-of select="translate(@class,'ABCDEFGHIJKLMNOPQRSTUVWXYZ.','abcdefghijklmnopqrstuvwxyz/')"/>
					<xsl:text>.html#</xsl:text>
					<xsl:value-of select="translate(.,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')"/>
				</xsl:attribute>
				<xsl:apply-templates/>
<!--				<img src="{$images}external.gif" alt=""/> -->
			</a>
	    </xsl:when>
		<xsl:otherwise>
	    	<span>
				<xsl:attribute name="class">
					<xsl:text>feature-name</xsl:text>
				</xsl:attribute>
				<xsl:apply-templates/>
			</span>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:featurename" mode="listing">
	<i><tt><xsl:apply-templates mode="listing"/></tt></i>
</xsl:template>

<xsl:template match="trafficdoc:featurename" mode="inline">
	<i><tt><xsl:apply-templates mode="inline"/></tt></i>
</xsl:template>

<xsl:template match="trafficdoc:filename">
	<font color="#800000"><i><tt>
		<xsl:apply-templates/>
	</tt></i></font>
</xsl:template>

<xsl:template match="trafficdoc:exmlsyntax">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="trafficdoc:envar">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="trafficdoc:uri">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="trafficdoc:xpath">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="trafficdoc:xslt">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="trafficdoc:if">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:if" mode="listing">
	<i><b><tt><font color="#000080"><xsl:text>if</xsl:text></font></tt></b></i>
	<xsl:call-template name="space"/>
	<xsl:apply-templates select="trafficdoc:expression" mode="listing"/>
	<xsl:call-template name="space"/>
	<i><b><tt><font color="#000080"><xsl:text>then</xsl:text></font></tt></b></i>
	<xsl:call-template name="newline"/>
	<xsl:for-each select="trafficdoc:compound">
		<xsl:if test="@role='then'">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:call-template name="newline"/>
	<xsl:for-each select="trafficdoc:compound">
		<xsl:if test="@role='else'">
			<xsl:apply-templates select="." mode="indent"/>
			<i><b><tt><font color="#000080"><xsl:text>else</xsl:text></font></tt></b></i>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="listing"/>
			<xsl:call-template name="newline"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:apply-templates select="." mode="indent"/>
	<i><b><tt><font color="#000080"><xsl:text>end</xsl:text></font></tt></b></i>
</xsl:template>

<xsl:template match="trafficdoc:if" mode="inline">
	<i><b><tt><xsl:text>if</xsl:text></tt></b></i>
	<xsl:call-template name="space"/>
	<xsl:apply-templates select="trafficdoc:expression" mode="inline"/>
	<xsl:call-template name="space"/>
	<i><b><tt><xsl:text>then</xsl:text></tt></b></i>
	<xsl:call-template name="newline"/>
	<xsl:for-each select="trafficdoc:compound">
		<xsl:if test="@role='then'">
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:call-template name="newline"/>
	<xsl:for-each select="trafficdoc:compound">
		<xsl:if test="@role='else'">
			<xsl:apply-templates select="." mode="indent"/>
			<i><b><tt><xsl:text>else</xsl:text></tt></b></i>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="inline"/>
			<xsl:call-template name="newline"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:apply-templates select="." mode="indent"/>
	<i><b><tt><xsl:text>end</xsl:text></tt></b></i>
</xsl:template>

<xsl:template match="trafficdoc:mediaobjectco/trafficdoc:imageobjectco">
	<p>
		<xsl:if test="trafficdoc:imageobject/trafficdoc:imagedata/@align">
			<xsl:attribute name="align">
				<xsl:value-of select="trafficdoc:imageobject/trafficdoc:imagedata/@align"/>
			</xsl:attribute>
		</xsl:if>
		<map>
			<xsl:attribute name="name">
				<xsl:value-of select="generate-id(.)"/>
			</xsl:attribute>
			<xsl:for-each select="trafficdoc:areaspec/trafficdoc:area">
				<area shape="rect">
					<xsl:attribute name="coords">
						<xsl:value-of select="@coords"/>
					</xsl:attribute>
					<xsl:attribute name="href">
						<xsl:call-template name="linkend-to-url">
							<xsl:with-param name="linkend">
								<xsl:value-of select="@linkend"/>
							</xsl:with-param>
						</xsl:call-template>
					</xsl:attribute>
				</area>
			</xsl:for-each>
		</map>
		<img>
			<xsl:attribute name="src">
				<xsl:value-of select="trafficdoc:imageobject/trafficdoc:imagedata/@fileref"/>
			</xsl:attribute>
			<xsl:attribute name="usemap">
				<xsl:text>#</xsl:text><xsl:value-of select="generate-id(.)"/>
			</xsl:attribute>
		</img>
	</p>
</xsl:template>

<xsl:template match="trafficdoc:infixname">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:infixname" mode="listing">
	<tt><i><b>infix</b></i><xsl:text> &quot;</xsl:text><i>
	<xsl:apply-templates mode="listing"/>
	</i><xsl:text>&quot;</xsl:text></tt>
</xsl:template>

<xsl:template match="trafficdoc:infixname" mode="inline">
	<tt><i><b>infix</b></i><xsl:text> &quot;</xsl:text><i>
	<xsl:apply-templates mode="inline"/>
	</i><xsl:text>&quot;</xsl:text></tt>
</xsl:template>

<xsl:template match="trafficdoc:informalexample">
	<blockquote>
		<xsl:apply-templates/>
	</blockquote>
</xsl:template>

<xsl:template match="trafficdoc:integer">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:integer" mode="listing">
	<i><tt><font color="#808000">
	<xsl:apply-templates mode="listing"/>
	</font></tt></i>
</xsl:template>

<xsl:template match="trafficdoc:integer" mode="inline">
	<i><tt>
	<xsl:apply-templates mode="inline"/>
	</tt></i>
</xsl:template>

<xsl:template match="trafficdoc:itemizedlist">
	<ul>
		<xsl:for-each select="trafficdoc:listitem">
			<li>
				<xsl:for-each select="trafficdoc:*">
					<xsl:choose>
						<xsl:when test="position()=1 and name(.)='para'">
							<xsl:apply-templates/>
						</xsl:when>
						<xsl:otherwise>
							<xsl:apply-templates select="."/>
						</xsl:otherwise>
					</xsl:choose>
				</xsl:for-each>
			</li>
		</xsl:for-each>
	</ul>
</xsl:template>

<xsl:template match="trafficdoc:libraryname">
	<i><xsl:apply-templates/></i>
</xsl:template>

<!--
<xsl:template match="trafficdoc:link">
	<a>
		<xsl:attribute name="href">
			<xsl:call-template name="linkend-to-url">
				<xsl:with-param name="linkend">
					<xsl:value-of select="@linkend"/>
				</xsl:with-param>
			</xsl:call-template>
		</xsl:attribute>
		<xsl:apply-templates/>
	</a>
</xsl:template>
-->

<xsl:template match="trafficdoc:local">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:local" mode="listing">
	<i><tt><xsl:apply-templates mode="listing"/></tt></i>
</xsl:template>

<xsl:template match="trafficdoc:local" mode="inline">
	<i><tt><xsl:apply-templates mode="inline"/></tt></i>
</xsl:template>

<xsl:template match="trafficdoc:loop">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:loop" mode="listing">
	<xsl:choose>
		<xsl:when test="@indent='false'">
			<i><b><tt><font color="#000080"><xsl:text>from</xsl:text></font></tt></b></i>
			<xsl:call-template name="space"/>
			<xsl:for-each select="trafficdoc:compound">
				<xsl:if test="@role='from'">
					<xsl:for-each select="trafficdoc:*">
						<xsl:apply-templates select="." mode="listing"/>
						<xsl:if test="position()!=last()">
							<tt><xsl:text>; </xsl:text></tt>
						</xsl:if>
					</xsl:for-each>
				</xsl:if>
			</xsl:for-each>
			<xsl:call-template name="space"/>
			<i><b><tt><font color="#000080"><xsl:text>until</xsl:text></font></tt></b></i>
			<xsl:call-template name="space"/>
			<xsl:apply-templates select="trafficdoc:until/trafficdoc:expression" mode="listing"/>
			<xsl:call-template name="space"/>
			<i><b><tt><font color="#000080"><xsl:text>loop</xsl:text></font></tt></b></i>
			<xsl:call-template name="newline"/>
		</xsl:when>
		<xsl:otherwise>
			<i><b><tt><font color="#000080"><xsl:text>from</xsl:text></font></tt></b></i>
			<xsl:call-template name="newline"/>
			<xsl:for-each select="trafficdoc:compound">
				<xsl:if test="@role='from'">
					<xsl:apply-templates select="." mode="listing"/>
				</xsl:if>
			</xsl:for-each>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="indent"/>
			<i><b><tt><font color="#000080"><xsl:text>until</xsl:text></font></tt></b></i>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="indent"/>
			<xsl:call-template name="indent"/>
			<xsl:apply-templates select="trafficdoc:until/trafficdoc:expression" mode="listing"/>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="indent"/>
			<i><b><tt><font color="#000080"><xsl:text>loop</xsl:text></font></tt></b></i>
			<xsl:call-template name="newline"/>
		</xsl:otherwise>
	</xsl:choose>
	<xsl:for-each select="trafficdoc:compound">
		<xsl:if test="@role='loop'">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:call-template name="newline"/>
	<xsl:apply-templates select="." mode="indent"/>
	<i><b><tt><font color="#000080"><xsl:text>end</xsl:text></font></tt></b></i>
</xsl:template>

<xsl:template match="trafficdoc:loop" mode="inline">
	<xsl:choose>
		<xsl:when test="@indent='false'">
			<i><b><tt><xsl:text>from</xsl:text></tt></b></i>
			<xsl:call-template name="space"/>
			<xsl:for-each select="trafficdoc:compound">
				<xsl:if test="@role='from'">
					<xsl:for-each select="trafficdoc:*">
						<xsl:apply-templates select="." mode="inline"/>
						<xsl:if test="position()!=last()">
							<tt><xsl:text>; </xsl:text></tt>
						</xsl:if>
					</xsl:for-each>
				</xsl:if>
			</xsl:for-each>
			<xsl:call-template name="space"/>
			<i><b><tt><xsl:text>until</xsl:text></tt></b></i>
			<xsl:call-template name="space"/>
			<xsl:apply-templates select="trafficdoc:until/trafficdoc:expression" mode="inline"/>
			<xsl:call-template name="space"/>
			<i><b><tt><xsl:text>loop</xsl:text></tt></b></i>
			<xsl:call-template name="newline"/>
		</xsl:when>
		<xsl:otherwise>
			<i><b><tt><xsl:text>from</xsl:text></tt></b></i>
			<xsl:call-template name="newline"/>
			<xsl:for-each select="trafficdoc:compound">
				<xsl:if test="@role='from'">
					<xsl:apply-templates select="." mode="inline"/>
				</xsl:if>
			</xsl:for-each>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="indent"/>
			<i><b><tt><xsl:text>until</xsl:text></tt></b></i>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="indent"/>
			<xsl:call-template name="indent"/>
			<xsl:apply-templates select="trafficdoc:until/trafficdoc:expression" mode="inline"/>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="indent"/>
			<i><b><tt><xsl:text>loop</xsl:text></tt></b></i>
			<xsl:call-template name="newline"/>
		</xsl:otherwise>
	</xsl:choose>
	<xsl:for-each select="trafficdoc:compound">
		<xsl:if test="@role='loop'">
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:call-template name="newline"/>
	<xsl:apply-templates select="." mode="indent"/>
	<i><b><tt><xsl:text>end</xsl:text></tt></b></i>
</xsl:template>

<xsl:template match="trafficdoc:orderedlist">
	<ol>
		<xsl:for-each select="trafficdoc:listitem">
			<li>
				<xsl:for-each select="trafficdoc:*">
					<xsl:choose>
						<xsl:when test="position()=1 and name(.)='para'">
							<xsl:apply-templates/>
						</xsl:when>
						<xsl:otherwise>
							<xsl:apply-templates select="."/>
						</xsl:otherwise>
					</xsl:choose>
				</xsl:for-each>
			</li>
		</xsl:for-each>
	</ol>
</xsl:template>

<xsl:template match="trafficdoc:para">
	<p>
		<xsl:apply-templates/>
	</p>
</xsl:template>

<xsl:template match="trafficdoc:projectname">
	<i><xsl:apply-templates/></i>
</xsl:template>

<xsl:template match="trafficdoc:programlisting">
	<pre>
		<xsl:apply-templates/>
	</pre>
</xsl:template>

<xsl:template match="trafficdoc:quote">
	<xsl:text>&#147;</xsl:text><xsl:apply-templates/><xsl:text>&#148;</xsl:text>
</xsl:template>

<xsl:template match="trafficdoc:section">
	<div>
	<xsl:if test="@id">
		<a>
			<xsl:attribute name="id">
				<xsl:value-of select="@id"/>
			</xsl:attribute>
		</a>
	</xsl:if>
	<xsl:apply-templates/>
	</div>
</xsl:template>

<xsl:template match="trafficdoc:row" mode="tbody">
	<tr>
		<xsl:apply-templates select="trafficdoc:entry" mode="tbody"/>
	</tr>
</xsl:template>

<xsl:template match="trafficdoc:row" mode="tfoot">
	<tr>
		<xsl:apply-templates select="trafficdoc:entry" mode="tfoot"/>
	</tr>
</xsl:template>

<xsl:template match="trafficdoc:row" mode="thead">
	<tr>
		<xsl:apply-templates select="trafficdoc:entry" mode="thead"/>
	</tr>
</xsl:template>

<xsl:template match="trafficdoc:section/trafficdoc:title">
	<xsl:variable gexslt:explain="no" name="section_level" select="count(ancestor::trafficdoc:section) + 1"/>
	<xsl:variable name="header_name">
		<xsl:choose>
			<xsl:when test="$section_level &lt; 7">h<xsl:value-of select="string($section_level)"/></xsl:when>
			<xsl:otherwise>p</xsl:otherwise>
		</xsl:choose>
	</xsl:variable>
	<xsl:element name="{$header_name}" namespace="http://www.w3.org/1999/xhtml">
		<xsl:apply-templates/>
	</xsl:element>
</xsl:template>

<xsl:template match="trafficdoc:synopsis">
<pre>
<xsl:value-of select="."/>
</pre>
</xsl:template>

<xsl:template match="trafficdoc:table">
	<table alt="{trafficdoc:title}">
		<caption><xsl:value-of select="trafficdoc:title"/></caption>
		<col span="{trafficdoc:tgroup/@cols}"/>
		<!-- support only one group... -->
		<xsl:apply-templates select="trafficdoc:tgroup/trafficdoc:thead"/>
		<xsl:apply-templates select="trafficdoc:tgroup/trafficdoc:tfoot"/>
		<xsl:apply-templates select="trafficdoc:tgroup/trafficdoc:tbody"/>
	</table>
</xsl:template>

<xsl:template match="trafficdoc:target">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:target" mode="listing">
	<xsl:apply-templates mode="listing"/>
</xsl:template>

<xsl:template match="trafficdoc:target" mode="inline">
	<xsl:apply-templates mode="inline"/>
</xsl:template>

<xsl:template match="trafficdoc:tbody">
	<tbody>
		<xsl:apply-templates select="trafficdoc:row" mode="tbody"/>
	</tbody>
</xsl:template>

<xsl:template match="trafficdoc:tfoot">
	<tfoot>
		<xsl:apply-templates select="trafficdoc:row" mode="tfoot"/>
	</tfoot>
</xsl:template>

<xsl:template match="trafficdoc:thead">
	<thead>
		<xsl:apply-templates select="trafficdoc:row" mode="thead"/>
	</thead>
</xsl:template>

<xsl:template match="trafficdoc:true">
	<xsl:choose>
		<xsl:when test="ancestor::trafficdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:true" mode="listing">
	<i><tt><font color="#808000"><xsl:text>True</xsl:text></font></tt></i>
</xsl:template>

<xsl:template match="trafficdoc:true" mode="inline">
	<i><tt><xsl:text>True</xsl:text></tt></i>
</xsl:template>

<xsl:template match="trafficdoc:ulink">
	<a>
		<xsl:attribute name="href">
			<xsl:value-of select="@url"/>
		</xsl:attribute>
		<xsl:apply-templates/>
	</a>
</xsl:template>

<xsl:template match="trafficdoc:indexlink">
	<a>

		<xsl:attribute name="href">

			<xsl:value-of select="@url"/>

		</xsl:attribute>
     <font color="#006600">
		<xsl:apply-templates/>
     </font>
	</a>
</xsl:template>

<xsl:template match="trafficdoc:toplink">
	<a href="#top_of_page">
     <font color="#006600">
           top
     </font>
	</a>
</xsl:template>

<xsl:template match="trafficdoc:variablelist">
	<dl>
		<xsl:apply-templates/>
	</dl>
</xsl:template>

<xsl:template match="trafficdoc:varlistentry">
	<dt>
		<xsl:for-each select="trafficdoc:term">
			<xsl:apply-templates select="."/>
		</xsl:for-each>
	</dt>
	<dd>
		<xsl:for-each select="trafficdoc:listitem/*">
			<xsl:choose>
				<xsl:when test="position()=1 and name(.)='para'">
					<xsl:apply-templates/>
				</xsl:when>
				<xsl:otherwise>
					<xsl:apply-templates select="."/>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:for-each>
	</dd>
</xsl:template>

<xsl:template match="trafficdoc:warning">
	<p><font color="#FF0000">
		<xsl:apply-templates/>
	</font></p>
</xsl:template>




<xsl:template name="indent">
		<!--
			Indentation in programlisting.
		-->
	<tt><xsl:text>    </xsl:text></tt>
</xsl:template>

<xsl:template name="newline">
		<!--
			New-line in programlisting.
		-->
<tt><xsl:text>
</xsl:text></tt>
</xsl:template>

<xsl:template name="space">
		<!--
			Space character in programlisting.
		-->
	<tt><xsl:text> </xsl:text></tt>
</xsl:template>

<xsl:template match="trafficdoc:*" mode="indent">
		<!--
			Add indentation per nested compounds in programlisting.
		-->
	<xsl:for-each select="ancestor::trafficdoc:compound">
		<xsl:if test="position()!=last()">
			<xsl:call-template name="indent"/>
		</xsl:if>
	</xsl:for-each>
</xsl:template>


<xsl:template name="linkend-to-url">
		<!--
			Replace id by URL.
			For example:
				linkend: xxx/yyy
				result: xxx/yyy.html
			Another example:
				linkend: xxx/yyy#zzz
				result: xxx/yyy.html#zzz
		-->
	<xsl:param name="linkend"/>
	<xsl:choose>
		<xsl:when test="contains($linkend,'#')">
			<xsl:value-of select="concat(substring-before($linkend,'#'),'.html#',substring-after($linkend,'#'))"/>
		</xsl:when>
		<xsl:otherwise>
			<xsl:value-of select="concat($linkend,'.html')"/>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:link">
	<xsl:choose>
		<xsl:when test="@feature">
			<a>
				<xsl:attribute name="href">
					<xsl:value-of select="$srcdoc"/>
					<xsl:value-of select="translate(@class,'ABCDEFGHIJKLMNOPQRSTUVWXYZ.','abcdefghijklmnopqrstuvwxyz/')"/>
					<xsl:text>.html#</xsl:text>
					<xsl:value-of select="translate(@feature,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')"/>
				</xsl:attribute>
				<xsl:apply-templates/>
				<img src="{$images}external.gif" alt=""/>
			</a>
		</xsl:when>
		<xsl:when test="@class">
			<a>
				<xsl:attribute name="href">
					<xsl:value-of select="$srcdoc"/>
					<xsl:value-of select="translate(@class,'ABCDEFGHIJKLMNOPQRSTUVWXYZ.','abcdefghijklmnopqrstuvwxyz/')"/>
					<xsl:text>.html</xsl:text>
				</xsl:attribute>
				<xsl:apply-templates/>
				<img src="{$images}external.gif" alt=""/>
			</a>
		</xsl:when>
		<xsl:otherwise>
			<a>
				<xsl:attribute name="href">
					<xsl:value-of select="@url"/>
				</xsl:attribute>
				<xsl:apply-templates/>
				<xsl:if test="contains(@url,'http://')">
					<img src="{$images}external.gif" alt=""/>
				</xsl:if>
			</a>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="trafficdoc:chapter" mode="page-toc">
	<div class="feature-list">
		<xsl:for-each select="//child::trafficdoc:section/trafficdoc:title">
			<a>
				<xsl:attribute name="href">
					<xsl:text>#</xsl:text>
					<xsl:value-of select="translate(.,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')"/>
				</xsl:attribute>
				<xsl:apply-templates/>
			</a>
		</xsl:for-each>
	</div>
</xsl:template>

<xsl:template match="trafficdoc:newline">
	<br />
</xsl:template>

<xsl:template match="trafficdoc:strong">
	<strong>
		<xsl:apply-templates/>
	</strong>
</xsl:template>

<xsl:template match="trafficdoc:note">
	<div class="note">
		<strong class="note-tag">Note:</strong>
		<xsl:apply-templates/>
	</div>
</xsl:template>

<xsl:template match="trafficdoc:hint">
	<div class="hint">
		<strong class="hint-tag">Hint:</strong>
		<xsl:apply-templates/>
	</div>
</xsl:template>

<xsl:template match="trafficdoc:aside">
	<div class="aside">
		<strong class="aside-tag">Aside:</strong>
		<xsl:apply-templates/>
	</div>
</xsl:template>

<xsl:template match="trafficdoc:image">
	<img>
		<xsl:attribute name="src">
			<xsl:value-of select="@src"/>
		</xsl:attribute>
		<xsl:attribute name="alt">
			<xsl:value-of select="@alt"/>
		</xsl:attribute>
	</img>
</xsl:template>

<xsl:template match="trafficdoc:keyword">
	<span class="keyword"><xsl:apply-templates/></span>
</xsl:template>

<xsl:template match="trafficdoc:clustername">
	<xsl:choose>
		<xsl:when test="@parent">
			<a>
				<xsl:attribute name="class">
					<xsl:text>cluster-name</xsl:text>
				</xsl:attribute>
				<xsl:attribute name="href">
					<xsl:value-of select="$srcdoc"/>
					<xsl:value-of select="translate(@parent,'ABCDEFGHIJKLMNOPQRSTUVWXYZ.','abcdefghijklmnopqrstuvwxyz/')"/>
					<xsl:text>/</xsl:text>
					<xsl:value-of select="translate(.,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')"/>
					<xsl:text>/</xsl:text>
					<xsl:text>cluster.</xsl:text>
					<xsl:value-of select="translate(.,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')"/>
					<xsl:text>.html</xsl:text>
				</xsl:attribute>
				<xsl:apply-templates/>
			</a>
		</xsl:when>
		<xsl:otherwise>
			<span>
				<xsl:attribute name="class">
					<xsl:text>cluster-name</xsl:text>
				</xsl:attribute>
				<xsl:apply-templates mode="inline"/>
			</span>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>
</xsl:stylesheet>
