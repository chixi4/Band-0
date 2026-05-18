
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202c07e(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 != 4) {
    return 0xc;
  }
  thunk_FUN_ram_4202b7dc();
  iVar4 = FUN_ram_420365de(*(undefined2 *)(param_2 + 1));
  if (iVar4 == 0) {
    thunk_FUN_ram_4202b7f6();
  }
  else {
    bVar2 = false;
    FUN_ram_42033294(*(undefined2 *)(iVar4 + 0x48));
    bVar1 = *(byte *)(iVar4 + 0x34);
    uVar3 = *(uint *)(iVar4 + 4);
    thunk_FUN_ram_4202b7f6();
    if ((uVar3 >> 8 & 1) == 0) {
      bVar2 = *(char *)(param_2 + 3) == '\b';
    }
    if ((_DAT_ram_3fcb6b90 == 0) &&
       (_DAT_ram_3fcb6b90 = FUN_ram_403a5e02(1,8), _DAT_ram_3fcb6b90 == 0)) {
      return 6;
    }
    if ((bVar1 & 1) == 0) {
      if ((*(char *)(param_2 + 3) == '>') || (bVar2)) {
        FUN_ram_4202ddd4(*(undefined2 *)(param_2 + 1),0x3e);
        FUN_ram_4202926a(*(undefined2 *)(param_2 + 1));
        FUN_ram_42031fda(*(undefined2 *)(param_2 + 1));
        FUN_ram_42030596(*(undefined2 *)(param_2 + 1));
        iVar4 = FUN_ram_42036cce(*(undefined2 *)(param_2 + 1));
        if (iVar4 != 0) {
          return iVar4;
        }
        FUN_ram_4202ee9a();
        return 0;
      }
    }
    else if ((*(char *)(param_2 + 3) == '>') && (*(byte *)(_DAT_ram_3fcb6b90 + 7) < 3)) {
      *(byte *)(_DAT_ram_3fcb6b90 + 7) = *(byte *)(_DAT_ram_3fcb6b90 + 7) + 1;
      FUN_ram_4202e33c(*(undefined2 *)(param_2 + 1));
      goto LAB_ram_4202c0b2;
    }
    (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcb6b90,0,8);
  }
LAB_ram_4202c0b2:
  FUN_ram_4202f10c(param_2);
  FUN_ram_4202b83e();
  return 0;
}

