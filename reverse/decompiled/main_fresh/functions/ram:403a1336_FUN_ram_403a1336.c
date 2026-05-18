
void FUN_ram_403a1336(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  byte abStack_18 [4];
  uint auStack_14 [2];
  
  iVar1 = FUN_ram_403a12f0(*param_1,0x35,auStack_14);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_403a12f0(*param_1,5,abStack_18), iVar1 == 0)) {
    *param_2 = (auStack_14[0] & 0xff) << 8 | (uint)abStack_18[0];
  }
  return;
}

