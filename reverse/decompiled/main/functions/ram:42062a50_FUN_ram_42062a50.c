
undefined4 FUN_ram_42062a50(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_ram_42048b12(param_1,1);
  (*(code *)&SUB_ram_400108c0)(1,0,param_1);
  FUN_ram_4204b98e();
  (*(code *)&SUB_ram_40010790)(param_1,(uint)(byte)(&DAT_ram_3c0face0)[param_3] + param_4,param_2,0)
  ;
  return 0;
}

