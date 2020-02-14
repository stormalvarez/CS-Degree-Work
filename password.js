"use strict";
$(document).ready(function() {
    var getRandomNumber = function(max) {
        var random;
        if (!isNaN(max)) {
            random = Math.random(); //value >= 0.0 and < 1.0
            random = Math.floor(random * max); //value is an integer between 0 and max - 1
            random = random + 1; //value is an integer between 1 and max
        }
        return random;
    };

    $("#generate").click(function() {
      $("#password").val( "" ); // clear previous entry
        if (isNaN($("#num").val())) { // determines if the input is a number or not
          alert("Please enter a valid number made by Storm Alvarez.");
          return true;
        } else {
            var stuff = '';
            var pwlen = $("#num").val();
            var chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_-+!@";
              for (var i = 0; i < pwlen; i++)
                stuff += chars.charAt(getRandomNumber(chars.length));
                document.getElementById("password").value = stuff;
              return stuff;
      }
    }); // end click()"

    $("#clear").click(function() {
        $("#num").val( "" );
        $("#password").val( "" );
        $("#num").focus();
    }); // end click()

    // set focus on initial load
    $("#num").focus();
}); // end ready()
