const char* PARAM_INPUT_1 = "input1";
const char index_html[]  = 
R"rawliteral(
<!DOCTYPE HTML><html><head>
  <title>ESP32-C3 Word clock</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <style type="text/css">
  .auto-style1 {
    font-family: Verdana, Geneva, Tahoma, sans-serif;
    background-color: #FFFFFF;
  }
  .auto-style2 {
    text-align: center;
  }
  .auto-style3 {
    font-family: Verdana, Geneva, Tahoma, sans-serif;
    background-color: #FFFFFF;
    color: #FF0000;
  }
  .auto-style4 {
    font-size: smaller;
  }
  .auto-style5 {
    color: #FF0000;
    font-size: smaller;
  }
  .auto-style6 {
    color: #008000;
    font-size: smaller;
  }
  .auto-style7 {
    color: #0000FF;
    font-size: smaller;
  }
  .auto-style8 {
    font-weight: bold;
    background-color: #FFFF00;
    color: #000000;
  }
  .auto-style9 {
    background-color: #FFFFFF;
  }
  .auto-style10 {
    border-left-style: none;
    border-left-width: medium;
    border-bottom-style: none;
    border-bottom-width: medium;
  }
  .auto-style11 {
    border-left: 0px solid #000000;
    border-right: 0px solid #000000;
    border-top: thin solid #000000;
    border-bottom: thin solid #000000;
  }
  .auto-style12 {
    text-align: center;
    border-left-style: none;
    border-left-width: medium;
    border-right-style: none;
    border-right-width: medium;
    border-top-style: none;
    border-top-width: medium;
  }
  .auto-style13 {
    border-right-style: none;
    border-right-width: medium;
    border-top-style: none;
    border-top-width: medium;
    border-bottom-style: none;
    border-bottom-width: medium;
  }
  .auto-style14 {
    border-top-style: none;
    border-top-width: medium;
    border-bottom-style: none;
    border-bottom-width: medium;
  }
  .auto-style15 {
    border-top-style: none;
    border-top-width: medium;
  }
  .auto-style16 {
    border-bottom-style: none;
    border-bottom-width: medium;
  }
  .auto-style17 {
    color: #000000;
    font-size: smaller;
  }
  </style>
  </head>
  <body>
   <table style="width: auto" class="auto-style11">
     <tr>
       <td class="auto-style2" colspan="3">
   <span class="auto-style3"><strong>ESP32-C3 Word Clock</strong></td>
     </tr>
     <tr>
       <td colspan="3"><span class="auto-style1"> Enter 
       time as: hhmmss <span class="auto-style4">(132145)</span></td>
     </tr>
     <tr>
       <td style="width: 108px">
   <span class="auto-style1">
    <strong>A</strong> SSID</td>
       <td style="width: 98px">
   <span class="auto-style1"> <strong>B</strong> Password</td>
       <td style="width: 125px">
   <span class="auto-style1"> <strong>C</strong> BLE beacon</td>
     </tr>
     <tr>
       <td colspan="3">
   <span class="auto-style1">
    <strong>D</strong> Date              <span class="auto-style4">(D15012021)</span><strong>&nbsp;&nbsp; T</strong> Time                <span class="auto-style4">(T132145)</span></td>
     </tr>
     <tr>
       <td colspan="3" class="auto-style16">
   <span class="auto-style1">
    <strong>E</strong> Set Timezone <span class="auto-style4">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; E<-02>2 or E<+01>-1</span></td>
     </tr>
     <tr>
       <td colspan="3" class="auto-style12">
   <span class="auto-style1">&nbsp;Own colour: 
       <span class="auto-style4">(F</span><span class="auto-style5">RR</span><span class="auto-style6">GG</span><span class="auto-style7">BB</span><span class="auto-style17"> 
       Hex:0-F</span>)</td>
     </tr>
     <tr>
       <td style="width: 108px" class="auto-style10">
   <span class="auto-style1">
    <strong>F</strong> Font</td>
       <td style="width: 98px" class="auto-style14">
   <span class="auto-style1"> <strong>G</strong> Dimmed</td>
       <td class="auto-style13" style="width: 125px">
   <span class="auto-style1"> <strong>H</strong> Bckgnd</td>
     </tr>
     <tr>
       <td style="width: 108px" class="auto-style15">
   <span class="auto-style1">
    <strong>L</strong> Language</td>
       <td style="width: 98px" class="auto-style15">
   <span class="auto-style1">
       <strong>L0</strong>&nbsp; NL</td>
       <td class="auto-style15" style="width: 125px">
   <span class="auto-style1"><strong>L1</strong> UK</td>
     </tr>
     <tr>
       <td style="width: 108px">
   <span class="auto-style1"><strong>L2</strong> DE</td>
       <td style="width: 98px">
   <span class="auto-style1"><strong>L3</strong> FR</td>
       <td style="width: 125px">
   <span class="auto-style1"><strong>L4</strong> Wheel</td>
     </tr>
     <tr>
       <td colspan="3">
   <span class="auto-style1">
    <strong>N</strong> Display off between Nhhhh <span class="auto-style4">
       (N2208)</span></td>
     </tr>
     <tr>
       <td colspan="3" style="height: 22px">
   <span class="auto-style1">
    <strong>O</strong> Display <span class="auto-style4">On/Off</span><br class="auto-style4">
         </td>
     </tr>
     <tr>
       <td colspan="3">
   <span class="auto-style1">
    <strong>P</strong> Own colour design <span class="auto-style4">(0-F)&nbsp; 
       (P00FF00)</span></td>
     </tr>
     <tr>
       <td colspan="3">
   <span class="auto-style1">
    <strong>Q</strong> Display colour choice <span class="auto-style4">(Q0-Q6)</span></td>
     </tr>
     <tr>
       <td style="width: 108px">
   <span class="auto-style1">
    <strong>  Q0</strong> Yellow</td>
       <td style="width: 98px">
   <span class="auto-style1">    <strong>Q1</strong> Hourly</td>
       <td style="width: 125px">
   <span class="auto-style1">
    <strong>  Q2</strong> White</td>
     </tr>
     <tr>
       <td style="width: 108px">
   <span class="auto-style1"> <strong>Q3</strong> All Own</td>
       <td style="width: 98px">
   <span class="auto-style1">
    <strong>  Q4</strong> Own</td>
       <td style="width: 125px">
   <span class="auto-style1"> <strong>Q5</strong> Wheel</td>
     </tr>
     <tr>
       <td style="width: 108px">
   <span class="auto-style1">
    <strong>  Q6</strong> Digital </td>
       <td style="width: 98px">
   <span class="auto-style1">
    <strong>  Q7</strong> Analog</td>
       <td style="width: 125px">
   <span class="auto-style1">
       <strong>-</strong></td>
     </tr>
     <tr>
       <td colspan="2">
   <span class="auto-style1">
    <strong>R</strong> Reset settings</td>
       <td style="width: 125px">
   <span class="auto-style1"> <strong>@</strong> Restart MCU</td>
     </tr>
     <tr>
       <td style="width: 108px">
   <span class="auto-style1">
    <strong>W</strong> WIFI</td>
       <td style="width: 98px"><span class="auto-style1">
         <span class="auto-style4">On/Off</span><br class="auto-style4">
         </td>
       <td style="width: 125px">
   <span class="auto-style1"> <strong>X</strong><span class="auto-style9">
       </span>NTP <span class="auto-style4"><strong>&amp;</strong>Requery</span></td>
     </tr>
     <tr>
       <td style="width: 108px">
   <span class="auto-style1"> 
    <strong>Y</strong> BLE</td>
       <td style="width: 98px"><span class="auto-style1">
         <span class="auto-style4">On/Off</span><br class="auto-style4">
         </td>
       <td style="width: 125px">
   <span class="auto-style1"> <strong>Z</strong> Fast BLE</td>
     </tr>
   </table>
   <form action="/get">
       <strong>
     <input type="submit" value="Send" class="auto-style8" style="height: 22px"></strong>&nbsp;<input type="text" name="input1" style="width: 272px"></form><br>
    
<br class="auto-style1">
</body></html>
)rawliteral";
