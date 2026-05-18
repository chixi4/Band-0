
undefined4 FUN_ram_4205df94(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (((param_1 != (undefined4 *)0x0) && (param_1[5] != 0)) && ((*(byte *)(param_1 + 10) & 8) == 0))
  {
    puVar5 = param_1 + 5;
    if (param_2 != 0) {
      puVar3 = param_1;
      if (param_3 != 0) {
        puVar3 = (undefined4 *)FUN_ram_4039bf1e();
      }
      iVar2 = FUN_ram_4205dde6(*puVar3,puVar3[0xc]);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_4205c7fc(puVar5,&DAT_ram_3c0f75a4);
        if ((iVar2 == 0) && ((code *)param_1[0xc] != (code *)0x0)) {
          (*(code *)param_1[0xc])(param_1,0,0);
        }
      }
      else {
        *(int *)(iVar2 + 8) = param_2;
        FUN_ram_4205d4c4();
        FUN_ram_42054522(param_2);
        iVar4 = FUN_ram_4205c7fc(puVar5,iVar2);
        if (iVar4 == 0) {
          if ((code *)param_1[0xc] == (code *)0x0) {
            return 0;
          }
          (*(code *)param_1[0xc])(param_1,0,0);
          return 0;
        }
        uVar1 = *(undefined4 *)(iVar2 + 8);
        FUN_ram_4205491a(uVar1,0);
        FUN_ram_42054920(uVar1,0);
        FUN_ram_4205493c(uVar1,0);
        FUN_ram_42054982(uVar1,0,0);
        FUN_ram_42054958(uVar1,0);
        *(undefined4 *)(iVar2 + 8) = 0;
        *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 8;
        FUN_ram_4205c8ac(iVar2 + 0x10);
        *(undefined4 *)(iVar2 + 0x10) = 0;
        FUN_ram_4205de78(iVar2);
      }
      return 0xffffffff;
    }
    iVar2 = FUN_ram_4205c7fc(puVar5,&DAT_ram_3c0f75a4);
    if ((iVar2 == 0) && ((code *)param_1[0xc] != (code *)0x0)) {
      (*(code *)param_1[0xc])(param_1,0,0);
    }
  }
  return 0xfffffffa;
}

