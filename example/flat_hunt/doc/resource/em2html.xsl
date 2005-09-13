<?xml version="1.0"?>

<xsl:stylesheet
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
	xmlns="http://www.w3.org/1999/xhtml"
	xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:gexslt="http://www.gobosoft.com/eiffel/gobo/gexslt/extension"
	xmlns:emdoc="http://www.gobosoft.com/eiffel/gobo/documentation"
	gexslt:explain="no"
	exclude-result-prefixes="xs gexslt emdoc"
	version="2.0">

<xsl:param name="previous"/>
<xsl:param name="next"/>
<xsl:param name="toc"/>
<xsl:param name="images" select="'../resource/pic/'"/>
<xsl:param name="srcdoc" select="'../src/'"/>
<xsl:param name="home"/>

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

<xsl:template match="emdoc:anchor">
	<a>
		<xsl:attribute name="id">
			<xsl:value-of select="@id"/>
		</xsl:attribute>
	</a>
	<xsl:apply-templates/>
</xsl:template>

<xsl:template match="emdoc:blockquote">
	<blockquote>
		<xsl:apply-templates/>
	</blockquote>
</xsl:template>

<xsl:template match="emdoc:chapter">
	<html xml:lang="en">
	<head>
		<title>
			<xsl:value-of select="emdoc:title"/>
		</title>
		<link rel="stylesheet" type="text/css" href="../resource/style.css" />
	</head>
	<body>
<!--		<a name="top_of_page"/> -->
		<xsl:apply-templates select="." mode="header"/>
<!--		<xsl:apply-templates select="." mode="page-toc" /> -->
		<xsl:apply-templates select="emdoc:variablelist|emdoc:itemizedlist|emdoc:orderedlist|emdoc:para|emdoc:programlisting|emdoc:section|emdoc:synopsis|emdoc:table"/>
		<xsl:apply-templates select="." mode="footer"/>
	</body>
	</html>
</xsl:template>

<xsl:template match="emdoc:chapter" mode="header">
	<table width="100%">
	<tr>
		<td>
			<h1><xsl:value-of select="emdoc:title"/></h1>
		</td>
		<td align="right">
			<xsl:choose>
				<xsl:when test="$previous!=''">
					<a>
						<xsl:attribute name="href">
							<xsl:value-of select="$previous"/>
						</xsl:attribute>
						<img src="{$images}previous.png" alt="Previous"/>
					</a>
				</xsl:when>
				<xsl:otherwise>
					<img src="{$images}previous.png" alt="Previous"/>
				</xsl:otherwise>
			</xsl:choose>
			<xsl:choose>
				<xsl:when test="$next!=''">
					<a>
						<xsl:attribute name="href">
							<xsl:value-of select="$next"/>
						</xsl:attribute>
						<img src="{$images}next.png" alt="Next"/>
					</a>
				</xsl:when>
				<xsl:otherwise>
					<img src="{$images}next.png" alt="Next"/>
				</xsl:otherwise>
			</xsl:choose>
		</td>
	</tr>
	</table>
	<hr/>
</xsl:template>

<xsl:template match="emdoc:chapter" mode="footer">
	<hr/>
	<table width="100%">
	<tr>
		<td>
			<address>
				<xsl:apply-templates select="emdoc:chapterinfo/emdoc:copyright" mode="footer"/>
				<br/>
				<xsl:apply-templates select="emdoc:chapterinfo/emdoc:email" mode="footer"/>
				<br/>lin
				<a href="http://se.inf.ethz.ch/projects/ursina_caluori">http://se.inf.ethz.ch/projects/ursina_caluori</a>
				<br/>
				<xsl:apply-templates select="emdoc:chapterinfo/emdoc:date" mode="footer"/>
			</address>
		</td>
		<td align="right" valign="top">
			<xsl:choose>
				<xsl:when test="$home!=''">
					<a>
						<xsl:attribute name="href">
							<xsl:value-of select="$home"/>
						</xsl:attribute>
						<img src="{$images}home.png" alt="Home"/>
					</a>
				</xsl:when>
				<xsl:otherwise>
					<a href="http://se.inf.ethz.ch/projects/ursina_caluori">
						<img src="{$images}home.png" alt="Home"/>
					</a>
				</xsl:otherwise>
			</xsl:choose>
			<xsl:choose>
				<xsl:when test="$toc!=''">
					<a>
						<xsl:attribute name="href">
							<xsl:value-of select="$toc"/>
						</xsl:attribute>
						<img src="{$images}toc.png" alt="Toc"/>
					</a>
				</xsl:when>
				<xsl:otherwise>
					<img src="{$images}toc.png" alt="Toc"/>
				</xsl:otherwise>
			</xsl:choose>
			<xsl:choose>
				<xsl:when test="$previous!=''">
					<a>
						<xsl:attribute name="href">
							<xsl:value-of select="$previous"/>
						</xsl:attribute>
						<img src="{$images}previous.png" alt="Previous"/>
					</a>
				</xsl:when>
				<xsl:otherwise>
					<img src="{$images}previous.png" alt="Previous"/>
				</xsl:otherwise>
			</xsl:choose>
			<xsl:choose>
				<xsl:when test="$next!=''">
					<a>
						<xsl:attribute name="href">
							<xsl:value-of select="$next"/>
						</xsl:attribute>
						<img src="{$images}next.png" alt="Next"/>
					</a>
				</xsl:when>
				<xsl:otherwise>
					<img src="{$images}next.png" alt="Next"/>
				</xsl:otherwise>
			</xsl:choose>
		</td>
	</tr>
	</table>
</xsl:template>

<xsl:template match="emdoc:citetitle">
	<i><xsl:apply-templates/></i>
</xsl:template>

<xsl:template match="emdoc:classname">
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
<!--				<img src="{$images}external.png" alt=""/> -->
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

<xsl:template match="emdoc:classname" mode="listing">
	<span>
		<xsl:attribute name="class">
			<xsl:text>class-name</xsl:text>
		</xsl:attribute>
		<xsl:apply-templates mode="listing"/>
	</span>
</xsl:template>

<xsl:template match="emdoc:classname" mode="inline">
	<span>
		<xsl:attribute name="class">
			<xsl:text>class-name</xsl:text>
		</xsl:attribute>
		<xsl:apply-templates mode="inline"/>
	</span>
</xsl:template>

<xsl:template match="emdoc:comment">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:comment" mode="listing">
	<font color="#008000"><tt><xsl:text>-- </xsl:text><xsl:apply-templates mode="listing"/></tt></font>
</xsl:template>

<xsl:template match="emdoc:comment" mode="inline">
	<font color="#008000"><tt><xsl:text>-- </xsl:text><xsl:apply-templates mode="inline"/></tt></font>
</xsl:template>

<xsl:template match="emdoc:compound">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:compound" mode="listing">
	<xsl:for-each select="emdoc:*">
		<xsl:apply-templates select="." mode="indent"/>
		<xsl:apply-templates select="." mode="listing"/>
		<xsl:if test="position()!=last()">
			<xsl:call-template name="newline"/>
		</xsl:if>
	</xsl:for-each>
</xsl:template>

<xsl:template match="emdoc:compound" mode="inline">
	<xsl:for-each select="emdoc:*">
		<xsl:apply-templates select="." mode="indent"/>
		<xsl:apply-templates select="." mode="inline"/>
		<xsl:if test="position()!=last()">
			<xsl:call-template name="newline"/>
		</xsl:if>
	</xsl:for-each>
</xsl:template>

<xsl:template match="emdoc:constructname">
	<tt><xsl:apply-templates/></tt>
</xsl:template>

<xsl:template match="emdoc:copyright" mode="footer">
	<b>
	<xsl:text>Copyright &#169; </xsl:text>
	<xsl:for-each select="emdoc:year">
		<xsl:apply-templates/>
		<xsl:text>, </xsl:text>
	</xsl:for-each>
	<xsl:for-each select="emdoc:holder">
		<xsl:apply-templates/>
		<xsl:if test="position()!=last()">
			<xsl:text>, </xsl:text>
		</xsl:if>
	</xsl:for-each>
	</b>
</xsl:template>

<xsl:template match="emdoc:date" mode="footer">
	<b><xsl:text>Last Updated: </xsl:text></b>
	<xsl:apply-templates/>
</xsl:template>

<xsl:template match="emdoc:email" mode="footer">
	<b><xsl:text>mailto:</xsl:text></b>
	<a>
		<xsl:attribute name="href">
			<xsl:text>mailto:</xsl:text>
			<xsl:apply-templates/>
		</xsl:attribute>
		<xsl:apply-templates/>
	</a>
</xsl:template>

<xsl:template match="emdoc:emphasis">
	<i><xsl:apply-templates/></i>
</xsl:template>

<xsl:template match="emdoc:entry" mode="tbody">
	<td><xsl:apply-templates/></td>
</xsl:template>

<xsl:template match="emdoc:entry" mode="tfoot">
	<td><xsl:apply-templates/></td>
</xsl:template>

<xsl:template match="emdoc:entry" mode="thead">
	<td><xsl:apply-templates/></td>
</xsl:template>

<xsl:template match="emdoc:equal">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:equal" mode="listing">
	<xsl:for-each select="emdoc:expression">
		<xsl:if test="position()=1">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:if>
	</xsl:for-each>
	<tt><xsl:text> = </xsl:text></tt>
	<xsl:for-each select="emdoc:expression">
		<xsl:if test="position()=last()">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:if>
	</xsl:for-each>
</xsl:template>

<xsl:template match="emdoc:equal" mode="inline">
	<xsl:for-each select="emdoc:expression">
		<xsl:if test="position()=1">
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:if>
	</xsl:for-each>
	<tt><xsl:text> = </xsl:text></tt>
	<xsl:for-each select="emdoc:expression">
		<xsl:if test="position()=last()">
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:if>
	</xsl:for-each>
</xsl:template>

<xsl:template match="emdoc:expression">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:expression" mode="listing">
	<xsl:apply-templates select="emdoc:*" mode="listing"/>
</xsl:template>

<xsl:template match="emdoc:expression" mode="inline">
	<xsl:apply-templates select="emdoc:*" mode="inline"/>
</xsl:template>

<xsl:template match="emdoc:featurecall">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:featurecall" mode="listing">
	<xsl:if test="emdoc:target">
		<xsl:apply-templates select="emdoc:target" mode="listing"/>
		<tt><xsl:text>.</xsl:text></tt>
	</xsl:if>
	<xsl:apply-templates select="emdoc:featurename" mode="listing"/>
	<xsl:if test="emdoc:arguments">
		<tt><xsl:text> (</xsl:text></tt>
		<xsl:for-each select="emdoc:arguments/*">
			<xsl:apply-templates select="." mode="listing"/>
			<xsl:if test="position()!=last()">
				<tt><xsl:text>, </xsl:text></tt>
			</xsl:if>
		</xsl:for-each>
		<tt><xsl:text>)</xsl:text></tt>
	</xsl:if>
</xsl:template>

<xsl:template match="emdoc:featurecall" mode="inline">
	<xsl:if test="emdoc:target">
		<xsl:apply-templates select="emdoc:target" mode="inline"/>
		<tt><xsl:text>.</xsl:text></tt>
	</xsl:if>
	<xsl:apply-templates select="emdoc:featurename" mode="inline"/>
	<xsl:if test="emdoc:arguments">
		<tt><xsl:text> (</xsl:text></tt>
		<xsl:for-each select="emdoc:arguments/*">
			<xsl:apply-templates select="." mode="inline"/>
			<xsl:if test="position()!=last()">
				<tt><xsl:text>, </xsl:text></tt>
			</xsl:if>
		</xsl:for-each>
		<tt><xsl:text>)</xsl:text></tt>
	</xsl:if>
</xsl:template>

<xsl:template match="emdoc:featurename">
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
<!--				<img src="{$images}external.png" alt=""/> -->
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

<xsl:template match="emdoc:featurename" mode="listing">
	<i><tt><xsl:apply-templates mode="listing"/></tt></i>
</xsl:template>

<xsl:template match="emdoc:featurename" mode="inline">
	<i><tt><xsl:apply-templates mode="inline"/></tt></i>
</xsl:template>

<xsl:template match="emdoc:filename">
	<font color="#800000"><i><tt>
		<xsl:apply-templates/>
	</tt></i></font>
</xsl:template>

<xsl:template match="emdoc:exmlsyntax">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="emdoc:envar">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="emdoc:uri">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="emdoc:xpath">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="emdoc:xslt">
	<font color="#008080">
		<xsl:apply-templates/>
	</font>
</xsl:template>

<xsl:template match="emdoc:if">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:if" mode="listing">
	<i><b><tt><font color="#000080"><xsl:text>if</xsl:text></font></tt></b></i>
	<xsl:call-template name="space"/>
	<xsl:apply-templates select="emdoc:expression" mode="listing"/>
	<xsl:call-template name="space"/>
	<i><b><tt><font color="#000080"><xsl:text>then</xsl:text></font></tt></b></i>
	<xsl:call-template name="newline"/>
	<xsl:for-each select="emdoc:compound">
		<xsl:if test="@role='then'">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:call-template name="newline"/>
	<xsl:for-each select="emdoc:compound">
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

<xsl:template match="emdoc:if" mode="inline">
	<i><b><tt><xsl:text>if</xsl:text></tt></b></i>
	<xsl:call-template name="space"/>
	<xsl:apply-templates select="emdoc:expression" mode="inline"/>
	<xsl:call-template name="space"/>
	<i><b><tt><xsl:text>then</xsl:text></tt></b></i>
	<xsl:call-template name="newline"/>
	<xsl:for-each select="emdoc:compound">
		<xsl:if test="@role='then'">
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:call-template name="newline"/>
	<xsl:for-each select="emdoc:compound">
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

<xsl:template match="emdoc:mediaobjectco/emdoc:imageobjectco">
	<p>
		<xsl:if test="emdoc:imageobject/emdoc:imagedata/@align">
			<xsl:attribute name="align">
				<xsl:value-of select="emdoc:imageobject/emdoc:imagedata/@align"/>
			</xsl:attribute>
		</xsl:if>
		<map>
			<xsl:attribute name="name">
				<xsl:value-of select="generate-id(.)"/>
			</xsl:attribute>
			<xsl:for-each select="emdoc:areaspec/emdoc:area">
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
				<xsl:value-of select="emdoc:imageobject/emdoc:imagedata/@fileref"/>
			</xsl:attribute>
			<xsl:attribute name="usemap">
				<xsl:text>#</xsl:text><xsl:value-of select="generate-id(.)"/>
			</xsl:attribute>
		</img>
	</p>
</xsl:template>

<xsl:template match="emdoc:infixname">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:infixname" mode="listing">
	<tt><i><b>infix</b></i><xsl:text> &quot;</xsl:text><i>
	<xsl:apply-templates mode="listing"/>
	</i><xsl:text>&quot;</xsl:text></tt>
</xsl:template>

<xsl:template match="emdoc:infixname" mode="inline">
	<tt><i><b>infix</b></i><xsl:text> &quot;</xsl:text><i>
	<xsl:apply-templates mode="inline"/>
	</i><xsl:text>&quot;</xsl:text></tt>
</xsl:template>

<xsl:template match="emdoc:informalexample">
	<blockquote>
		<xsl:apply-templates/>
	</blockquote>
</xsl:template>

<xsl:template match="emdoc:integer">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:integer" mode="listing">
	<i><tt><font color="#808000">
	<xsl:apply-templates mode="listing"/>
	</font></tt></i>
</xsl:template>

<xsl:template match="emdoc:integer" mode="inline">
	<i><tt>
	<xsl:apply-templates mode="inline"/>
	</tt></i>
</xsl:template>

<xsl:template match="emdoc:itemizedlist">
	<ul>
		<xsl:for-each select="emdoc:listitem">
			<li>
				<xsl:for-each select="emdoc:*">
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

<xsl:template match="emdoc:libraryname">
	<i><xsl:apply-templates/></i>
</xsl:template>

<!--
<xsl:template match="emdoc:link">
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

<xsl:template match="emdoc:local">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:local" mode="listing">
	<i><tt><xsl:apply-templates mode="listing"/></tt></i>
</xsl:template>

<xsl:template match="emdoc:local" mode="inline">
	<i><tt><xsl:apply-templates mode="inline"/></tt></i>
</xsl:template>

<xsl:template match="emdoc:loop">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:loop" mode="listing">
	<xsl:choose>
		<xsl:when test="@indent='false'">
			<i><b><tt><font color="#000080"><xsl:text>from</xsl:text></font></tt></b></i>
			<xsl:call-template name="space"/>
			<xsl:for-each select="emdoc:compound">
				<xsl:if test="@role='from'">
					<xsl:for-each select="emdoc:*">
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
			<xsl:apply-templates select="emdoc:until/emdoc:expression" mode="listing"/>
			<xsl:call-template name="space"/>
			<i><b><tt><font color="#000080"><xsl:text>loop</xsl:text></font></tt></b></i>
			<xsl:call-template name="newline"/>
		</xsl:when>
		<xsl:otherwise>
			<i><b><tt><font color="#000080"><xsl:text>from</xsl:text></font></tt></b></i>
			<xsl:call-template name="newline"/>
			<xsl:for-each select="emdoc:compound">
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
			<xsl:apply-templates select="emdoc:until/emdoc:expression" mode="listing"/>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="indent"/>
			<i><b><tt><font color="#000080"><xsl:text>loop</xsl:text></font></tt></b></i>
			<xsl:call-template name="newline"/>
		</xsl:otherwise>
	</xsl:choose>
	<xsl:for-each select="emdoc:compound">
		<xsl:if test="@role='loop'">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:call-template name="newline"/>
	<xsl:apply-templates select="." mode="indent"/>
	<i><b><tt><font color="#000080"><xsl:text>end</xsl:text></font></tt></b></i>
</xsl:template>

<xsl:template match="emdoc:loop" mode="inline">
	<xsl:choose>
		<xsl:when test="@indent='false'">
			<i><b><tt><xsl:text>from</xsl:text></tt></b></i>
			<xsl:call-template name="space"/>
			<xsl:for-each select="emdoc:compound">
				<xsl:if test="@role='from'">
					<xsl:for-each select="emdoc:*">
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
			<xsl:apply-templates select="emdoc:until/emdoc:expression" mode="inline"/>
			<xsl:call-template name="space"/>
			<i><b><tt><xsl:text>loop</xsl:text></tt></b></i>
			<xsl:call-template name="newline"/>
		</xsl:when>
		<xsl:otherwise>
			<i><b><tt><xsl:text>from</xsl:text></tt></b></i>
			<xsl:call-template name="newline"/>
			<xsl:for-each select="emdoc:compound">
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
			<xsl:apply-templates select="emdoc:until/emdoc:expression" mode="inline"/>
			<xsl:call-template name="newline"/>
			<xsl:apply-templates select="." mode="indent"/>
			<i><b><tt><xsl:text>loop</xsl:text></tt></b></i>
			<xsl:call-template name="newline"/>
		</xsl:otherwise>
	</xsl:choose>
	<xsl:for-each select="emdoc:compound">
		<xsl:if test="@role='loop'">
			<xsl:apply-templates select="." mode="inline"/>
		</xsl:if>
	</xsl:for-each>
	<xsl:call-template name="newline"/>
	<xsl:apply-templates select="." mode="indent"/>
	<i><b><tt><xsl:text>end</xsl:text></tt></b></i>
</xsl:template>

<xsl:template match="emdoc:orderedlist">
	<ol>
		<xsl:for-each select="emdoc:listitem">
			<li>
				<xsl:for-each select="emdoc:*">
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

<xsl:template match="emdoc:para">
	<p>
		<xsl:apply-templates/>
	</p>
</xsl:template>

<xsl:template match="emdoc:projectname">
	<i><xsl:apply-templates/></i>
</xsl:template>

<xsl:template match="emdoc:programlisting">
	<pre>
		<xsl:apply-templates/>
	</pre>
</xsl:template>

<xsl:template match="emdoc:quote">
	<xsl:text>&#147;</xsl:text><xsl:apply-templates/><xsl:text>&#148;</xsl:text>
</xsl:template>

<xsl:template match="emdoc:section">
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

<xsl:template match="emdoc:row" mode="tbody">
	<tr>
		<xsl:apply-templates select="emdoc:entry" mode="tbody"/>
	</tr>
</xsl:template>

<xsl:template match="emdoc:row" mode="tfoot">
	<tr>
		<xsl:apply-templates select="emdoc:entry" mode="tfoot"/>
	</tr>
</xsl:template>

<xsl:template match="emdoc:row" mode="thead">
	<tr>
		<xsl:apply-templates select="emdoc:entry" mode="thead"/>
	</tr>
</xsl:template>

<xsl:template match="emdoc:section/emdoc:title">
	<xsl:variable gexslt:explain="no" name="section_level" select="count(ancestor::emdoc:section) + 1"/>
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

<xsl:template match="emdoc:synopsis">
<pre>
<xsl:value-of select="."/>
</pre>
</xsl:template>

<xsl:template match="emdoc:table">
	<table alt="{emdoc:title}">
		<caption><xsl:value-of select="emdoc:title"/></caption>
		<col span="{emdoc:tgroup/@cols}"/>
		<!-- support only one group... -->
		<xsl:apply-templates select="emdoc:tgroup/emdoc:thead"/>
		<xsl:apply-templates select="emdoc:tgroup/emdoc:tfoot"/>
		<xsl:apply-templates select="emdoc:tgroup/emdoc:tbody"/>
	</table>
</xsl:template>

<xsl:template match="emdoc:target">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:target" mode="listing">
	<xsl:apply-templates mode="listing"/>
</xsl:template>

<xsl:template match="emdoc:target" mode="inline">
	<xsl:apply-templates mode="inline"/>
</xsl:template>

<xsl:template match="emdoc:tbody">
	<tbody>
		<xsl:apply-templates select="emdoc:row" mode="tbody"/>
	</tbody>
</xsl:template>

<xsl:template match="emdoc:tfoot">
	<tfoot>
		<xsl:apply-templates select="emdoc:row" mode="tfoot"/>
	</tfoot>
</xsl:template>

<xsl:template match="emdoc:thead">
	<thead>
		<xsl:apply-templates select="emdoc:row" mode="thead"/>
	</thead>
</xsl:template>

<xsl:template match="emdoc:true">
	<xsl:choose>
		<xsl:when test="ancestor::emdoc:programlisting">
			<xsl:apply-templates select="." mode="listing"/>
		</xsl:when>
		<xsl:otherwise>
			<font color="#008080">
				<xsl:apply-templates select="." mode="inline"/>
			</font>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:true" mode="listing">
	<i><tt><font color="#808000"><xsl:text>True</xsl:text></font></tt></i>
</xsl:template>

<xsl:template match="emdoc:true" mode="inline">
	<i><tt><xsl:text>True</xsl:text></tt></i>
</xsl:template>

<xsl:template match="emdoc:ulink">
	<a>
		<xsl:attribute name="href">
			<xsl:value-of select="@url"/>
		</xsl:attribute>
		<xsl:apply-templates/>
	</a>
</xsl:template>

<xsl:template match="emdoc:indexlink">
	<a>

		<xsl:attribute name="href">

			<xsl:value-of select="@url"/>

		</xsl:attribute>
     <font color="#CC6600">
		<xsl:apply-templates/>
     </font>
	</a>
</xsl:template>

<xsl:template match="emdoc:toplink">
	<a href="#top_of_page">
     <font color="#CC6600">
           top
     </font>
	</a>
</xsl:template>

<xsl:template match="emdoc:variablelist">
	<dl>
		<xsl:apply-templates/>
	</dl>
</xsl:template>

<xsl:template match="emdoc:varlistentry">
	<dt>
		<xsl:for-each select="emdoc:term">
			<xsl:apply-templates select="."/>
		</xsl:for-each>
	</dt>
	<dd>
		<xsl:for-each select="emdoc:listitem/*">
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

<xsl:template match="emdoc:warning">
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

<xsl:template match="emdoc:*" mode="indent">
		<!--
			Add indentation per nested compounds in programlisting.
		-->
	<xsl:for-each select="ancestor::emdoc:compound">
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

<xsl:template match="emdoc:link">
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
				<img src="{$images}external.png" alt=""/>
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
				<img src="{$images}external.png" alt=""/>
			</a>
		</xsl:when>
		<xsl:otherwise>
			<a>
				<xsl:attribute name="href">
					<xsl:value-of select="@url"/>
				</xsl:attribute>
				<xsl:apply-templates/>
			</a>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template match="emdoc:chapter" mode="page-toc">
	<div class="feature-list">
		<xsl:for-each select="//child::emdoc:section/emdoc:title">
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

<xsl:template match="emdoc:newline">
	<br />
</xsl:template>

<xsl:template match="emdoc:strong">
	<strong>
		<xsl:apply-templates/>
	</strong>
</xsl:template>

<xsl:template match="emdoc:note">
	<div class="note">
		<strong class="note-tag">Note:</strong>
		<xsl:apply-templates/>
	</div>
</xsl:template>

<xsl:template match="emdoc:hint">
	<div class="hint">
		<strong class="hint-tag">Hint:</strong>
		<xsl:apply-templates/>
	</div>
</xsl:template>

<xsl:template match="emdoc:image">
	<img>
		<xsl:attribute name="src">
			<xsl:value-of select="@src"/>
		</xsl:attribute>
	</img>
</xsl:template>

<xsl:template match="emdoc:keyword">
	<span class="keyword"><xsl:apply-templates/></span>
</xsl:template>

</xsl:stylesheet>
