<html>
  <head>
    <meta http-equiv="Pragma" content="no-cache">
    <title>php test</title>
  </head>
  <body>
    <form action="php-test.php" method="post">
      <input type="text" name="name" maxlength="16" autocomplete="off">
      <input type="submit" value="送信">
    </form>
    <table border="1">
      
      <?php
        if($_POST){
          $dsn = 'mysql:dbname=ku_db;host=localhost';
          $user = 'root';
          $password = '';
          $dbh = new PDO($dsn, $user, $password);
          $sql = "select * from student_tb where NAME='".$_POST['name']."'";
          //select * from student_tb where NAME='A'
          //select * from student_tb where NAME=''or'1'='1'
          echo '<tr><th>名前</th><th>年齢</th></tr>';
          foreach ($dbh->query($sql) as $row) {
              echo '<tr>';
              echo '<td>', $row['NAME'], '</td>';
              echo '<td>', $row['AGE'], '</td>';
              echo '</tr>';
          }
        }
      ?>

    </table>
  </body>
</html>