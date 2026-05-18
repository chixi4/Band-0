
/* WARNING: Removing unreachable block (ram,0x40392e50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40392df2(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = CONCAT44(param_3,param_2);
  if (param_1 != (int *)0x0) {
    uVar2 = 0x103;
    if ((_DAT_ram_3fcc5260 != 0) && (*param_1 != 0 || param_1[1] != 0)) {
      FUN_ram_40392b7e(0x103);
      lVar4 = FUN_ram_403919ae();
      iVar3 = param_1[2];
      uVar1 = param_1[3] & 0xffffff;
      FUN_ram_40392b8e(param_1);
      if (iVar3 != 0 || uVar1 != 0) {
        uVar5 = FUN_ram_4039198c();
        if (uVar6 <= uVar5) {
          uVar6 = FUN_ram_4039198c();
        }
        iVar3 = (int)uVar6;
        uVar1 = (uint)(uVar6 >> 0x20) & 0xffffff;
      }
      *param_1 = (int)(lVar4 + uVar6);
      param_1[3] = param_1[3] & 0xff000000U | uVar1;
      param_1[1] = (int)(lVar4 + uVar6 >> 0x20);
      param_1[2] = iVar3;
      FUN_ram_40392bfc(param_1,0);
      FUN_ram_40392b6e();
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

