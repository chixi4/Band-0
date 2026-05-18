
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42059338(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uStack_22;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 5) != '\0')) {
    if (param_2 == 1) {
      FUN_ram_42058e08(iVar1,0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0x14;
      if (*(char *)(iVar1 + 8) == '\0') {
        FUN_ram_420585b0(500,0x4204a58e,param_1);
        *(undefined1 *)(iVar1 + 8) = 1;
      }
    }
    else if (param_2 == 2) {
      FUN_ram_42053552(param_1,&DAT_ram_3c0f7590,&DAT_ram_3c0f7590,&DAT_ram_3c0f7590);
      iVar5 = *(int *)(param_1 + 0x20);
      FUN_ram_42058e08(iVar5,0xc);
      iVar1 = FUN_ram_420591cc(param_1,iVar5,4,&uStack_22);
      if (iVar1 != 0) {
        iVar6 = *(int *)(iVar1 + 4);
        iVar4 = iVar6 + 0xf0;
        uVar2 = FUN_ram_42058e58(uStack_22,iVar4,0x32,4);
        uStack_22 = (undefined2)uVar2;
        uVar3 = FUN_ram_420523b8(*(undefined4 *)(iVar5 + 0x2c));
        uStack_22 = FUN_ram_42058e90(uVar2,iVar4,uVar3);
        FUN_ram_4205c572(param_1,0xc,iVar6,&uStack_22);
        FUN_ram_42058eee(uStack_22,iVar4,iVar1);
        FUN_ram_42058a7e(_DAT_ram_3fcc5340,iVar1,&DAT_ram_3c0f758c,0x43,param_1,&DAT_ram_3c0f7590);
        FUN_ram_42053ac4(iVar1);
      }
    }
    else if (param_2 == 0) {
      FUN_ram_42058f36();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

