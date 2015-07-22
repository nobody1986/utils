<?php
class TT{
	$tree = [];
	$s = '';
	$stack = [];
	function __construct($str){
		$this->s = $str;
	}

	function parse(){
		$len = strlen($this->s);
		for($i =0 ;$i<$len;++$i){
			switch($this->s[$i]){
				case '(':
					array_push($this->stack,['type'=>'(']);
					break;
			}
		}
	}
}