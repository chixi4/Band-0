
undefined4 FUN_ram_4201288a(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_20 [6];
  
  iVar1 = FUN_ram_40396242();
  param_2[3] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = iVar1 * 10000;
  FUN_ram_4201277a(local_20);
  return local_20[0];
}

