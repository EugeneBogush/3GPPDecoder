What is 3GPPDecoder?
=====================

3GPPDecoder is a free open source decoder to decode wireless messages and PDUs(Protocol Data Units). The program currently supports Windows OS.

You can use 3GPPDecoder to decode 3GPP LTE, UMTS and GSM messages for RRC and NAS. Also it supports RLC (Radio Link Control) protocol PDU header decoding.

## How to build 3GPPDecoder

3GPPDecoder is developed using QT and main programming language is C++. To build the decoder program open the 3GPP Decoder.pro using QT Create and build it inside the environment.

## How to get the Setup file

Download the 3GPPDecoder executable from: [3GPP Decoder Installer](http://www.3glteinfo.com/3gpp-decoder/)

need add to file: ~/.config/wireshark/user_dlts:

###########
"User 3 (DLT=150)","lte-rrc.bcch.bch","0","","0",""

"User 4 (DLT=151)","lte-rrc.bcch.dl.sch","0","","0",""

"User 5 (DLT=152)","lte-rrc.dl.ccch","0","","0",""

"User 6 (DLT=153)","lte-rrc.dl.dcch","0","","0",""

"User 7 (DLT=154)","lte-rrc.pcch","0","","0",""

"User 8 (DLT=155)","lte-rrc.ul.ccch","0","","0",""

"User 9 (DLT=156)","lte-rrc.ul.dcch","0","","0","" 
###########

Example:
dump for LTE-RRC.DL.CCCH
60 12 80 03 A1 A3 0C 19 30 00 23 03 89 06 84 11 48 30 1C 00 00 00 50 3F 10 00 00 02 A0 10 01 08 20 00
Output:
DL-CCCH-Message
    message: c1 (0)
        c1: rrcConnectionSetup (3)
            rrcConnectionSetup
                rrc-TransactionIdentifier: 0
                criticalExtensions: c1 (0)
                    c1: rrcConnectionSetup-r8 (0)
                        rrcConnectionSetup-r8
                            radioResourceConfigDedicated
                                srb-ToAddModList: 1 item
                                    Item 0
                                        SRB-ToAddMod
                                            srb-Identity: 1
                                mac-MainConfig: explicitValue (0)
...
