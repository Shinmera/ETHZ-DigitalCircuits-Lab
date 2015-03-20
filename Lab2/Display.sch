<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A(3:0)" />
        <signal name="B(3:0)" />
        <signal name="Overflow" />
        <signal name="D(6:0)" />
        <signal name="S(4:0)" />
        <signal name="S(4)" />
        <signal name="S(3:0)" />
        <port polarity="Input" name="A(3:0)" />
        <port polarity="Input" name="B(3:0)" />
        <port polarity="Output" name="Overflow" />
        <port polarity="Output" name="D(6:0)" />
        <blockdef name="Adder">
            <timestamp>2015-3-20T12:44:49</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="Decoder">
            <timestamp>2015-3-20T12:44:6</timestamp>
            <rect width="256" x="64" y="-64" height="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="buf">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="128" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="0" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="-64" x1="128" />
            <line x2="64" y1="-64" y2="0" x1="64" />
        </blockdef>
        <block symbolname="Adder" name="XLXI_1">
            <blockpin signalname="A(3:0)" name="A(3:0)" />
            <blockpin signalname="B(3:0)" name="B(3:0)" />
            <blockpin signalname="S(4:0)" name="S(4:0)" />
        </block>
        <block symbolname="Decoder" name="XLXI_2">
            <blockpin signalname="S(3:0)" name="s(3:0)" />
            <blockpin signalname="D(6:0)" name="d(6:0)" />
        </block>
        <block symbolname="buf" name="XLXI_3">
            <blockpin signalname="S(4)" name="I" />
            <blockpin signalname="Overflow" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="304" y="512" name="XLXI_1" orien="R0">
        </instance>
        <branch name="A(3:0)">
            <wire x2="304" y1="416" y2="416" x1="208" />
        </branch>
        <branch name="B(3:0)">
            <wire x2="304" y1="480" y2="480" x1="208" />
        </branch>
        <iomarker fontsize="28" x="208" y="416" name="A(3:0)" orien="R180" />
        <iomarker fontsize="28" x="208" y="480" name="B(3:0)" orien="R180" />
        <instance x="960" y="384" name="XLXI_3" orien="R0" />
        <branch name="Overflow">
            <wire x2="1200" y1="352" y2="352" x1="1184" />
            <wire x2="1312" y1="352" y2="352" x1="1200" />
        </branch>
        <branch name="D(6:0)">
            <wire x2="1344" y1="560" y2="560" x1="1296" />
        </branch>
        <branch name="S(4:0)">
            <wire x2="768" y1="416" y2="416" x1="688" />
            <wire x2="768" y1="416" y2="560" x1="768" />
            <wire x2="768" y1="560" y2="608" x1="768" />
            <wire x2="768" y1="304" y2="352" x1="768" />
            <wire x2="768" y1="352" y2="416" x1="768" />
        </branch>
        <bustap x2="864" y1="352" y2="352" x1="768" />
        <branch name="S(4)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="912" y="352" type="branch" />
            <wire x2="896" y1="352" y2="352" x1="864" />
            <wire x2="912" y1="352" y2="352" x1="896" />
            <wire x2="960" y1="352" y2="352" x1="912" />
        </branch>
        <iomarker fontsize="28" x="1344" y="560" name="D(6:0)" orien="R0" />
        <instance x="912" y="592" name="XLXI_2" orien="R0">
        </instance>
        <bustap x2="864" y1="560" y2="560" x1="768" />
        <branch name="S(3:0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="896" y="560" type="branch" />
            <wire x2="896" y1="560" y2="560" x1="864" />
            <wire x2="912" y1="560" y2="560" x1="896" />
        </branch>
        <iomarker fontsize="28" x="1312" y="352" name="Overflow" orien="R0" />
    </sheet>
</drawing>