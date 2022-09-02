// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#include <dt-bindings/zmk/matrix_transform.h>

/ {
	chosen {
		zephyr,display = &oled;
		zmk,kscan = &kscan0;
		zmk,matrix_transform = &default_transform;
	};

	default_transform: keymap_transform_0 {
		compatible = "zmk,matrix-transform";
		columns = <10>;
		rows = <4>;
// | SW1  | SW2  | SW3  | SW4  | SW5  |   | SW5  | SW4  | SW3  | SW2  | SW1  |
// | SW6  | SW7  | SW8  | SW9  | SW10 |   | SW10 | SW9  | SW8  | SW7  | SW6  |
// | SW11 | SW12 | SW13 | SW14 | SW15 |   | SW15 | SW14 | SW13 | SW12 | SW11 |
//               | SW16 | SW17 | SW18 |   | SW18 | SW17 | SW16 |
		map = <
RC(0,4) RC(0,3) RC(0,2) RC(0,1) RC(0,0)  RC(0,5) RC(0,6) RC(0,7) RC(0,8) RC(0,9)
RC(1,4) RC(1,3) RC(1,2) RC(1,1) RC(1,0)  RC(1,5) RC(1,6) RC(1,7) RC(1,8) RC(1,9)
RC(2,4) RC(2,3) RC(2,2) RC(2,1) RC(2,0)  RC(2,5) RC(2,6) RC(2,7) RC(2,8) RC(2,9)
                RC(3,2) RC(3,1) RC(3,0)  RC(3,5) RC(3,6) RC(3,7)
		>;
	};

	kscan0: kscan {
		compatible = "zmk,kscan-gpio-matrix";
		label = "KSCAN";

		diode-direction = "col2row";
		row-gpios
			= <&pro_micro 15 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
			, <&pro_micro 14 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
			, <&pro_micro 16 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
			, <&pro_micro 10 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
			;
		
	};

	// TODO: per-key RGB node(s)?
};




&kscan0 {
	compatible = "zmk,kscan-gpio-matrix";
	label = "KSCAN";

	diode-direction = "col2row";

	col-gpios
		= <&pro_micro 5 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		, <&pro_micro 6 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		, <&pro_micro 7 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		, <&pro_micro 8 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		, <&pro_micro 9 (GPIO_ACTIVE_HIGH | GPIO_PULL_DOWN)>
		;
};


