
/* WARNING: Removing unreachable block (ram,0x40392f72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40392f42(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = CONCAT44(param_3,param_2);
  if (param_1 == (longlong *)0x0) {
    return 0x102;
  }
  uVar1 = 0x103;
  if (_DAT_ram_3fcc5260 != 0) {
    uVar2 = FUN_ram_4039198c(0x103);
    if (uVar3 <= uVar2) {
      uVar3 = FUN_ram_4039198c();
    }
    lVar4 = FUN_ram_403919ae();
    FUN_ram_40392b7e();
    uVar1 = 0x103;
    if ((int)*param_1 == 0 && *(int *)((int)param_1 + 4) == 0) {
      *param_1 = uVar3 + lVar4;
      *(int *)(param_1 + 1) = (int)uVar3;
      *(uint *)((int)param_1 + 0xc) =
           *(uint *)((int)param_1 + 0xc) & 0xff000000 | (uint)(uVar3 >> 0x20) & 0xffffff;
      FUN_ram_40392bfc(param_1,0);
      uVar1 = 0;
    }
    FUN_ram_40392b6e();
  }
  return uVar1;
}

