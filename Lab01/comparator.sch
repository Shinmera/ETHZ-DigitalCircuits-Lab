<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="XLXN_2" />
        <signal name="XLXN_3" />
        <signal name="XLXN_4" />
        <signal name="XLXN_6" />
        <signal name="XLXN_5" />
        <signal name="EQ" />
        <signal name="A0" />
        <signal name="B0" />
        <signal name="A1" />
        <signal name="B1" />
        <signal name="A2" />
        <signal name="B2" />
        <signal name="A3" />
        <signal name="B3" />
        <port polarity="Output" name="EQ" />
        <port polarity="Input" name="A0" />
        <port polarity="Input" name="B0" />
        <port polarity="Input" name="A1" />
        <port polarity="Input" name="B1" />
        <port polarity="Input" name="A2" />
        <port polarity="Input" name="B2" />
        <port polarity="Input" name="A3" />
        <port polarity="Input" name="B3" />
        <blockdef name="xnor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="60" y1="-128" y2="-128" x1="0" />
            <arc ex="44" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <arc ex="64" ey="-144" sx="64" sy="-48" r="56" cx="32" cy="-96" />
            <line x2="64" y1="-144" y2="-144" x1="128" />
            <line x2="64" y1="-48" y2="-48" x1="128" />
            <arc ex="128" ey="-144" sx="208" sy="-96" r="88" cx="132" cy="-56" />
            <arc ex="208" ey="-96" sx="128" sy="-48" r="88" cx="132" cy="-136" />
            <circle r="8" cx="220" cy="-96" />
            <line x2="256" y1="-96" y2="-96" x1="228" />
            <line x2="60" y1="-28" y2="-28" x1="60" />
        </blockdef>
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <block symbolname="xnor2" name="XLXI_1">
            <blockpin signalname="B0" name="I0" />
            <blockpin signalname="A0" name="I1" />
            <blockpin signalname="XLXN_1" name="O" />
        </block>
        <block symbolname="xnor2" name="XLXI_2">
            <blockpin signalname="B1" name="I0" />
            <blockpin signalname="A1" name="I1" />
            <blockpin signalname="XLXN_2" name="O" />
        </block>
        <block symbolname="xnor2" name="XLXI_3">
            <blockpin signalname="B2" name="I0" />
            <blockpin signalname="A2" name="I1" />
            <blockpin signalname="XLXN_3" name="O" />
        </block>
        <block symbolname="xnor2" name="XLXI_4">
            <blockpin signalname="B3" name="I0" />
            <blockpin signalname="A3" name="I1" />
            <blockpin signalname="XLXN_4" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_5">
            <blockpin signalname="XLXN_2" name="I0" />
            <blockpin signalname="XLXN_1" name="I1" />
            <blockpin signalname="XLXN_6" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_7">
            <blockpin signalname="XLXN_4" name="I0" />
            <blockpin signalname="XLXN_3" name="I1" />
            <blockpin signalname="XLXN_5" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_8">
            <blockpin signalname="XLXN_5" name="I0" />
            <blockpin signalname="XLXN_6" name="I1" />
            <blockpin signalname="EQ" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="288" y="224" name="XLXI_1" orien="R0" />
        <instance x="288" y="368" name="XLXI_2" orien="R0" />
        <instance x="288" y="512" name="XLXI_3" orien="R0" />
        <instance x="288" y="656" name="XLXI_4" orien="R0" />
        <instance x="592" y="288" name="XLXI_5" orien="R0" />
        <instance x="592" y="592" name="XLXI_7" orien="R0" />
        <branch name="XLXN_1">
            <wire x2="560" y1="128" y2="128" x1="544" />
            <wire x2="560" y1="128" y2="160" x1="560" />
            <wire x2="592" y1="160" y2="160" x1="560" />
        </branch>
        <branch name="XLXN_2">
            <wire x2="560" y1="272" y2="272" x1="544" />
            <wire x2="560" y1="224" y2="272" x1="560" />
            <wire x2="592" y1="224" y2="224" x1="560" />
        </branch>
        <branch name="XLXN_3">
            <wire x2="560" y1="416" y2="416" x1="544" />
            <wire x2="560" y1="416" y2="464" x1="560" />
            <wire x2="592" y1="464" y2="464" x1="560" />
        </branch>
        <branch name="XLXN_4">
            <wire x2="560" y1="560" y2="560" x1="544" />
            <wire x2="560" y1="528" y2="560" x1="560" />
            <wire x2="592" y1="528" y2="528" x1="560" />
        </branch>
        <branch name="XLXN_6">
            <wire x2="864" y1="192" y2="192" x1="848" />
            <wire x2="864" y1="192" y2="304" x1="864" />
            <wire x2="896" y1="304" y2="304" x1="864" />
        </branch>
        <branch name="XLXN_5">
            <wire x2="864" y1="496" y2="496" x1="848" />
            <wire x2="864" y1="368" y2="496" x1="864" />
            <wire x2="896" y1="368" y2="368" x1="864" />
        </branch>
        <instance x="896" y="432" name="XLXI_8" orien="R0" />
        <branch name="EQ">
            <wire x2="1280" y1="336" y2="336" x1="1152" />
        </branch>
        <branch name="A0">
            <wire x2="288" y1="96" y2="96" x1="160" />
        </branch>
        <branch name="B0">
            <wire x2="288" y1="160" y2="160" x1="160" />
        </branch>
        <branch name="A1">
            <wire x2="288" y1="240" y2="240" x1="160" />
        </branch>
        <branch name="B1">
            <wire x2="288" y1="304" y2="304" x1="160" />
        </branch>
        <branch name="A2">
            <wire x2="288" y1="384" y2="384" x1="160" />
        </branch>
        <branch name="B2">
            <wire x2="288" y1="448" y2="448" x1="160" />
        </branch>
        <branch name="A3">
            <wire x2="288" y1="528" y2="528" x1="160" />
        </branch>
        <branch name="B3">
            <wire x2="288" y1="592" y2="592" x1="160" />
        </branch>
        <iomarker fontsize="28" x="160" y="160" name="B0" orien="R180" />
        <iomarker fontsize="28" x="160" y="96" name="A0" orien="R180" />
        <iomarker fontsize="28" x="160" y="240" name="A1" orien="R180" />
        <iomarker fontsize="28" x="160" y="304" name="B1" orien="R180" />
        <iomarker fontsize="28" x="160" y="384" name="A2" orien="R180" />
        <iomarker fontsize="28" x="160" y="448" name="B2" orien="R180" />
        <iomarker fontsize="28" x="160" y="528" name="A3" orien="R180" />
        <iomarker fontsize="28" x="160" y="592" name="B3" orien="R180" />
        <iomarker fontsize="28" x="1280" y="336" name="EQ" orien="R0" />
    </sheet>
</drawing>