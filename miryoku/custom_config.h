// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
&kscan0 {
	compatible = "zmk,kscan-gpio-matrix";
	label = "KSCAN";

	diode-direction = "col2row";

	col-gpios
		= <&pro_micro 9 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		, <&pro_micro 8 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		, <&pro_micro 7 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		, <&pro_micro 6 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		, <&pro_micro 5 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		;
};

&kscan0 {
    row-gpios
        = <&pro_micro 15 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
        , <&pro_micro 14 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
        , <&pro_micro 16 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
        , <&pro_micro 10 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
        ;
};


