<?php
  $riel = 2103942;
  $kyat = 19092;
  $krones = 109;
  $lek = 9094;

  echo "At the start of your transaction you had $riel riel, $kyat kyat, $krones krones, and $lek lek.";

  $ridol = 0.00026;
  $kydol = 0.00066;
  $krodol = 0.11;
  $ledol = 0.009;

  echo "\n";

  $riel = $riel * $ridol;
  $kyat = $kyat * $kydol;
  $krones = $krones * $krodol;
  $lek = $lek * $ledol;

  echo "This equates to $riel dollar's worth of riel, $kyat dollar's worth of kyat, $krones dollar's worth of krones, and $lek dollar's worth of lek. \n";

  $riel -= 1;
  $kyat -= 1;
  $krones -= 1;
  $lek -= 1;

  $dollars = $riel+$kyat+$krones+$lek;

  echo "After fees, this is $riel dollar's worth of riel, $kyat dollar's worth of kyat, $krones dollar's worth of krones, and $lek dollar's worth of lek. Final total is $dollars dollars.";
