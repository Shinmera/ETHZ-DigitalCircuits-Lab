<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A(3:0)" />
        <signal name="XLXN_9" />
        <signal name="XLXN_10" />
        <signal name="XLXN_11" />
        <signal name="A(3)" />
        <signal name="A(2)" />
        <signal name="B(3:0)" />
        <signal name="B(1)" />
        <signal name="B(0)" />
        <signal name="B(2)" />
        <signal name="B(3)" />
        <signal name="A(1)" />
        <signal name="A(0)" />
        <signal name="XLXN_29" />
        <signal name="S(0)" />
        <signal name="S(1)" />
        <signal name="S(2)" />
        <signal name="S(3)" />
        <signal name="S(4)" />
        <signal name="S(4:0)" />
        <port polarity="Input" name="A(3:0)" />
        <port polarity="Input" name="B(3:0)" />
        <port polarity="Output" name="S(4:0)" />
        <blockdef name="FA">
            <timestamp>2015-3-13T13:34:9</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="gnd">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-96" x1="64" />
            <line x2="52" y1="-48" y2="-48" x1="76" />
            <line x2="60" y1="-32" y2="-32" x1="68" />
            <line x2="40" y1="-64" y2="-64" x1="88" />
            <line x2="64" y1="-64" y2="-80" x1="64" />
            <line x2="64" y1="-128" y2="-96" x1="64" />
        </blockdef>
        <block symbolname="FA" name="XLXI_1">
            <blockpin signalname="B(0)" name="B" />
            <blockpin signalname="XLXN_29" name="CI" />
            <blockpin signalname="A(0)" name="A" />
            <blockpin signalname="S(0)" name="S" />
            <blockpin signalname="XLXN_9" name="CO" />
        </block>
        <block symbolname="FA" name="XLXI_2">
            <blockpin signalname="B(1)" name="B" />
            <blockpin signalname="XLXN_9" name="CI" />
            <blockpin signalname="A(1)" name="A" />
            <blockpin signalname="S(1)" name="S" />
            <blockpin signalname="XLXN_10" name="CO" />
        </block>
        <block symbolname="FA" name="XLXI_4">
            <blockpin signalname="B(3)" name="B" />
            <blockpin signalname="XLXN_11" name="CI" />
            <blockpin signalname="A(3)" name="A" />
            <blockpin signalname="S(3)" name="S" />
            <blockpin signalname="S(4)" name="CO" />
        </block>
        <block symbolname="FA" name="XLXI_3">
            <blockpin signalname="B(2)" name="B" />
            <blockpin signalname="XLXN_10" name="CI" />
            <blockpin signalname="A(2)" name="A" />
            <blockpin signalname="S(2)" name="S" />
            <blockpin signalname="XLXN_11" name="CO" />
        </block>
        <block symbolname="gnd" name="XLXI_14">
            <blockpin signalname="XLXN_29" name="G" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <iomarker fontsize="28" x="256" y="192" name="A(3:0)" orien="R270" />
        <instance x="544" y="736" name="XLXI_2" orien="R0">
        </instance>
        <instance x="544" y="1008" name="XLXI_3" orien="R0">
        </instance>
        <instance x="544" y="1280" name="XLXI_4" orien="R0">
        </instance>
        <instance x="544" y="464" name="XLXI_1" orien="R0">
        </instance>
        <branch name="XLXN_9">
            <wire x2="1008" y1="512" y2="512" x1="480" />
            <wire x2="480" y1="512" y2="640" x1="480" />
            <wire x2="544" y1="640" y2="640" x1="480" />
            <wire x2="1008" y1="432" y2="432" x1="928" />
            <wire x2="1008" y1="432" y2="512" x1="1008" />
        </branch>
        <branch name="XLXN_10">
            <wire x2="1008" y1="784" y2="784" x1="464" />
            <wire x2="464" y1="784" y2="912" x1="464" />
            <wire x2="544" y1="912" y2="912" x1="464" />
            <wire x2="1008" y1="704" y2="704" x1="928" />
            <wire x2="1008" y1="704" y2="784" x1="1008" />
        </branch>
        <branch name="XLXN_11">
            <wire x2="992" y1="1056" y2="1056" x1="480" />
            <wire x2="480" y1="1056" y2="1184" x1="480" />
            <wire x2="544" y1="1184" y2="1184" x1="480" />
            <wire x2="992" y1="976" y2="976" x1="928" />
            <wire x2="992" y1="976" y2="1056" x1="992" />
        </branch>
        <bustap x2="352" y1="432" y2="432" x1="256" />
        <branch name="A(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="384" y="432" type="branch" />
            <wire x2="384" y1="432" y2="432" x1="352" />
            <wire x2="544" y1="432" y2="432" x1="384" />
        </branch>
        <branch name="A(3:0)">
            <wire x2="256" y1="192" y2="432" x1="256" />
            <wire x2="256" y1="432" y2="704" x1="256" />
            <wire x2="256" y1="704" y2="976" x1="256" />
            <wire x2="256" y1="976" y2="1248" x1="256" />
            <wire x2="256" y1="1248" y2="1376" x1="256" />
        </branch>
        <bustap x2="352" y1="704" y2="704" x1="256" />
        <branch name="A(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="384" y="704" type="branch" />
            <wire x2="384" y1="704" y2="704" x1="352" />
            <wire x2="544" y1="704" y2="704" x1="384" />
        </branch>
        <bustap x2="352" y1="976" y2="976" x1="256" />
        <branch name="A(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="384" y="976" type="branch" />
            <wire x2="384" y1="976" y2="976" x1="352" />
            <wire x2="544" y1="976" y2="976" x1="384" />
        </branch>
        <bustap x2="352" y1="1248" y2="1248" x1="256" />
        <branch name="A(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="384" y="1248" type="branch" />
            <wire x2="384" y1="1248" y2="1248" x1="352" />
            <wire x2="544" y1="1248" y2="1248" x1="384" />
        </branch>
        <branch name="B(3:0)">
            <wire x2="320" y1="192" y2="304" x1="320" />
            <wire x2="320" y1="304" y2="576" x1="320" />
            <wire x2="320" y1="576" y2="848" x1="320" />
            <wire x2="320" y1="848" y2="1120" x1="320" />
            <wire x2="320" y1="1120" y2="1376" x1="320" />
        </branch>
        <iomarker fontsize="28" x="320" y="192" name="B(3:0)" orien="R270" />
        <bustap x2="416" y1="576" y2="576" x1="320" />
        <branch name="B(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="432" y="576" type="branch" />
            <wire x2="432" y1="576" y2="576" x1="416" />
            <wire x2="544" y1="576" y2="576" x1="432" />
        </branch>
        <bustap x2="416" y1="304" y2="304" x1="320" />
        <branch name="B(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="432" y="304" type="branch" />
            <wire x2="432" y1="304" y2="304" x1="416" />
            <wire x2="544" y1="304" y2="304" x1="432" />
        </branch>
        <bustap x2="416" y1="848" y2="848" x1="320" />
        <branch name="B(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="432" y="848" type="branch" />
            <wire x2="432" y1="848" y2="848" x1="416" />
            <wire x2="544" y1="848" y2="848" x1="432" />
        </branch>
        <bustap x2="416" y1="1120" y2="1120" x1="320" />
        <branch name="B(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="448" y="1120" type="branch" />
            <wire x2="448" y1="1120" y2="1120" x1="416" />
            <wire x2="512" y1="1120" y2="1120" x1="448" />
            <wire x2="528" y1="1120" y2="1120" x1="512" />
            <wire x2="544" y1="1120" y2="1120" x1="528" />
        </branch>
        <instance x="544" y="64" name="XLXI_14" orien="R180" />
        <branch name="XLXN_29">
            <wire x2="480" y1="192" y2="368" x1="480" />
            <wire x2="544" y1="368" y2="368" x1="480" />
        </branch>
        <bustap x2="1024" y1="304" y2="304" x1="1120" />
        <branch name="S(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="992" y="304" type="branch" />
            <wire x2="992" y1="304" y2="304" x1="928" />
            <wire x2="1024" y1="304" y2="304" x1="992" />
        </branch>
        <bustap x2="1024" y1="576" y2="576" x1="1120" />
        <branch name="S(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="992" y="576" type="branch" />
            <wire x2="992" y1="576" y2="576" x1="928" />
            <wire x2="1024" y1="576" y2="576" x1="992" />
        </branch>
        <bustap x2="1024" y1="848" y2="848" x1="1120" />
        <branch name="S(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1008" y="848" type="branch" />
            <wire x2="992" y1="848" y2="848" x1="928" />
            <wire x2="1008" y1="848" y2="848" x1="992" />
            <wire x2="1024" y1="848" y2="848" x1="1008" />
        </branch>
        <bustap x2="1024" y1="1120" y2="1120" x1="1120" />
        <branch name="S(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1008" y="1120" type="branch" />
            <wire x2="992" y1="1120" y2="1120" x1="928" />
            <wire x2="1008" y1="1120" y2="1120" x1="992" />
            <wire x2="1024" y1="1120" y2="1120" x1="1008" />
        </branch>
        <bustap x2="1024" y1="1248" y2="1248" x1="1120" />
        <branch name="S(4)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1008" y="1248" type="branch" />
            <wire x2="1008" y1="1248" y2="1248" x1="928" />
            <wire x2="1024" y1="1248" y2="1248" x1="1008" />
        </branch>
        <iomarker fontsize="28" x="1120" y="192" name="S(4:0)" orien="R270" />
        <branch name="S(4:0)">
            <wire x2="1120" y1="192" y2="304" x1="1120" />
            <wire x2="1120" y1="304" y2="576" x1="1120" />
            <wire x2="1120" y1="576" y2="848" x1="1120" />
            <wire x2="1120" y1="848" y2="1120" x1="1120" />
            <wire x2="1120" y1="1120" y2="1248" x1="1120" />
            <wire x2="1120" y1="1248" y2="1376" x1="1120" />
        </branch>
    </sheet>
</drawing>