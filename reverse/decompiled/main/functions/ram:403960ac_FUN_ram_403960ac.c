
/* WARNING: Removing unreachable block (ram,0x403960fa) */

undefined4 FUN_ram_403960ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_ram_420122a2(1);
  if (iVar1 != 0) {
    lVar3 = (*(code *)&SUB_ram_400109f0)(0xffffffff,0xffff,iVar1,0);
    if ((ulonglong)(lVar3 * 1000000) < CONCAT44(param_2,param_1)) {
      uVar2 = 0x102;
    }
    else {
      FUN_ram_40396966();
      *(undefined4 *)(gp + -0x6d0) = param_1;
      *(undefined4 *)(gp + -0x6cc) = param_2;
      *(uint *)(gp + -0x6c8) = *(uint *)(gp + -0x6c8) | 8;
      FUN_ram_40396994();
      uVar2 = 0;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0);
}

