<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_3" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="XLXN_10" />
        <signal name="XLXN_13" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <signal name="XLXN_21" />
        <signal name="XLXN_24" />
        <signal name="XLXN_25" />
        <signal name="XLXN_26" />
        <signal name="XLXN_43" />
        <signal name="XLXN_44" />
        <signal name="XLXN_47" />
        <signal name="XLXN_48" />
        <signal name="XLXN_50" />
        <signal name="XLXN_58" />
        <signal name="XLXN_62" />
        <signal name="XLXN_64" />
        <signal name="XLXN_65" />
        <signal name="XLXN_66" />
        <signal name="XLXN_67" />
        <signal name="XLXN_73" />
        <signal name="XLXN_74" />
        <signal name="XLXN_75" />
        <signal name="XLXN_81" />
        <signal name="XLXN_87" />
        <signal name="XLXN_88" />
        <signal name="XLXN_89" />
        <signal name="XLXN_92" />
        <signal name="XLXN_93" />
        <signal name="XLXN_94" />
        <signal name="XLXN_95" />
        <signal name="XLXN_97" />
        <signal name="XLXN_98" />
        <signal name="XLXN_99" />
        <signal name="XLXN_100" />
        <signal name="XLXN_103" />
        <signal name="XLXN_104" />
        <signal name="B" />
        <signal name="CI" />
        <signal name="XLXN_72" />
        <signal name="S" />
        <signal name="A" />
        <signal name="XLXN_90" />
        <signal name="CO" />
        <signal name="XLXN_105" />
        <signal name="XLXN_106" />
        <port polarity="Input" name="B" />
        <port polarity="Input" name="CI" />
        <port polarity="Output" name="S" />
        <port polarity="Input" name="A" />
        <port polarity="Output" name="CO" />
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
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
        <blockdef name="xor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="60" y1="-128" y2="-128" x1="0" />
            <line x2="208" y1="-96" y2="-96" x1="256" />
            <arc ex="44" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <arc ex="64" ey="-144" sx="64" sy="-48" r="56" cx="32" cy="-96" />
            <line x2="64" y1="-144" y2="-144" x1="128" />
            <line x2="64" y1="-48" y2="-48" x1="128" />
            <arc ex="128" ey="-144" sx="208" sy="-96" r="88" cx="132" cy="-56" />
            <arc ex="208" ey="-96" sx="128" sy="-48" r="88" cx="132" cy="-136" />
        </blockdef>
        <block symbolname="xor2" name="XLXI_38">
            <blockpin signalname="B" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="XLXN_72" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_39">
            <blockpin signalname="CI" name="I0" />
            <blockpin signalname="XLXN_72" name="I1" />
            <blockpin signalname="S" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_42">
            <blockpin signalname="A" name="I0" />
            <blockpin signalname="B" name="I1" />
            <blockpin signalname="XLXN_90" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_37">
            <blockpin signalname="B" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="XLXN_105" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_43">
            <blockpin signalname="XLXN_90" name="I0" />
            <blockpin signalname="CI" name="I1" />
            <blockpin signalname="XLXN_106" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_48">
            <blockpin signalname="XLXN_106" name="I0" />
            <blockpin signalname="XLXN_105" name="I1" />
            <blockpin signalname="CO" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="B">
            <wire x2="224" y1="160" y2="160" x1="160" />
            <wire x2="320" y1="160" y2="160" x1="224" />
            <wire x2="224" y1="160" y2="384" x1="224" />
            <wire x2="224" y1="384" y2="608" x1="224" />
            <wire x2="336" y1="608" y2="608" x1="224" />
            <wire x2="320" y1="384" y2="384" x1="224" />
        </branch>
        <branch name="CI">
            <wire x2="192" y1="224" y2="224" x1="160" />
            <wire x2="192" y1="224" y2="768" x1="192" />
            <wire x2="336" y1="768" y2="768" x1="192" />
            <wire x2="320" y1="224" y2="224" x1="192" />
        </branch>
        <instance x="336" y="672" name="XLXI_38" orien="R0" />
        <instance x="336" y="832" name="XLXI_39" orien="R0" />
        <branch name="XLXN_72">
            <wire x2="320" y1="656" y2="704" x1="320" />
            <wire x2="336" y1="704" y2="704" x1="320" />
            <wire x2="592" y1="656" y2="656" x1="320" />
            <wire x2="592" y1="576" y2="656" x1="592" />
        </branch>
        <branch name="S">
            <wire x2="608" y1="736" y2="736" x1="592" />
            <wire x2="912" y1="736" y2="736" x1="608" />
        </branch>
        <instance x="320" y="512" name="XLXI_42" orien="R0" />
        <branch name="A">
            <wire x2="256" y1="96" y2="96" x1="160" />
            <wire x2="320" y1="96" y2="96" x1="256" />
            <wire x2="256" y1="96" y2="448" x1="256" />
            <wire x2="320" y1="448" y2="448" x1="256" />
            <wire x2="256" y1="448" y2="544" x1="256" />
            <wire x2="336" y1="544" y2="544" x1="256" />
        </branch>
        <instance x="320" y="224" name="XLXI_37" orien="R0" />
        <branch name="XLXN_90">
            <wire x2="320" y1="288" y2="336" x1="320" />
            <wire x2="576" y1="336" y2="336" x1="320" />
            <wire x2="576" y1="336" y2="416" x1="576" />
        </branch>
        <instance x="320" y="352" name="XLXI_43" orien="R0" />
        <instance x="640" y="288" name="XLXI_48" orien="R0" />
        <branch name="CO">
            <wire x2="912" y1="192" y2="192" x1="896" />
        </branch>
        <branch name="XLXN_105">
            <wire x2="576" y1="128" y2="160" x1="576" />
            <wire x2="640" y1="160" y2="160" x1="576" />
        </branch>
        <branch name="XLXN_106">
            <wire x2="576" y1="224" y2="256" x1="576" />
            <wire x2="640" y1="224" y2="224" x1="576" />
        </branch>
        <iomarker fontsize="28" x="160" y="160" name="B" orien="R180" />
        <iomarker fontsize="28" x="160" y="224" name="CI" orien="R180" />
        <iomarker fontsize="28" x="160" y="96" name="A" orien="R180" />
        <iomarker fontsize="28" x="912" y="192" name="CO" orien="R0" />
        <iomarker fontsize="28" x="912" y="736" name="S" orien="R0" />
    </sheet>
</drawing>