static const String change_ap_html = R"EOF(
<html>
<body>

<form method=post enctype="multipart/form-data">
To set the WiFi network details, enter here:
<br>
WiFi SSID: <input name=ssid size=40>
<br>
WiFi Password: <input name=password size=40>
<br>
<input type=submit value="Set WiFi" name=setwifi>
<hr>
If the change is accepted, the safe will reboot after 5 seconds.
</form>
</body>
</html>
)EOF";

static const String change_auth_html = R"EOF(
<html>
<body>

<form method=post action=safe/ enctype="multipart/form-data">
To set the user name and password needed to access the safe:
<br>
Safe Username: <input name=username size=40>
<br>
Safe Password: <input name=password size=40>
<br>
<input type=submit value="Set Auth Details" name=setauth>
<hr>
If the change is accepted, you will need to login again.
</form>
</body>
</html>
)EOF";

static const String index_html = R"EOF(
<!DOCTYPE html>
<html>

<head>
<title>Safe</title>
</head>
	
<frameset rows = "8%,*">
  <frame name = "top" src = "top_frame.html" />

  <frameset cols = "30%,70%">
    <frame name = "menu" src = "menu_frame.html" />
    <frame name = "main" src = "safe/?status=1" />
  </frameset>

  <noframes>
     <body>Your browser does not support frames.</body>
  </noframes>

</frameset>

</html>
)EOF";

static const String main_frame_html = R"EOF(
main
)EOF";

static const String menu_frame_html = R"EOF(
<html>
<head>
  <base target="main">
  <title>Safe menu</title>
</head>
<body>
<center><h2>Menu</h2>
<p>
<form method=post action=safe/ enctype="multipart/form-data">
<input type=submit value=Status name=status>
</form>
<hr>
<form method=post action=safe/ enctype="multipart/form-data">
Open safe door:<br>
<select name="duration">
  <option value="5">5 seconds</option>
  <option value="10">10 seconds</option>
  <option value="20">20 seconds</option>
  <option value="30">30 seconds</option>
  <option value="60">60 seconds</option>
</select>&nbsp;&nbsp;
<input type=submit value="Open Safe" name=open>
</form>
<hr>
<form method=post action=safe/ enctype="multipart/form-data">
Unlock pswd:<br>
<input type=password name=unlock length=40><br>
<input type=submit value="Test password" name=pwtest>
<input type=submit value="Unlock Once" name=unlock_1>
<input type=submit value="Unlock Permanent" name=unlock_all>
</form>
<hr>
<form method=post action=safe/ enctype="multipart/form-data">
Lock safe with new password:<br>
pswd: <input type=password name=lock1 length=40><br>
Repeat: <input type=password name=lock2 length=40><br>
<input type=submit value="Lock" name=lock>
</form>
<hr>
<a href="change_auth.html">Change Safe Authentication Details</a>
</center>
</form>
</body>
</html>
)EOF";

static const String top_frame_html = R"EOF(
<html>
<body>
<center><h1>Safe lock controls</h1></center>
</body>
</html>
)EOF";

