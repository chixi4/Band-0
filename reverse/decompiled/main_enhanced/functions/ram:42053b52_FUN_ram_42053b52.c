
undefined4 * FUN_ram_42053b52(uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  if (param_3 == 0x182) {
    param_1 = param_1 & 0xffff;
    puVar3 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)0x0;
    while( true ) {
      puVar5 = (undefined4 *)FUN_ram_420531dc(0xe);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_ram_4205c96c();
        cVar1 = DAT_ram_3fcc52e0;
        DAT_ram_3fcc52e0 = 1;
        FUN_ram_4205c996();
        if ((cVar1 == '\0') && (iVar6 = FUN_ram_42051ea6(0x42043934,0), iVar6 != 0)) {
          FUN_ram_4205c96c();
          DAT_ram_3fcc52e0 = 0;
          FUN_ram_4205c996();
        }
        if (puVar3 != (undefined4 *)0x0) {
          FUN_ram_42053ac4(puVar3);
        }
        return (undefined4 *)0x0;
      }
      uVar7 = 0x5d8 - (param_1 + 3 & 0xfffffffc);
      if (param_2 < (uVar7 & 0xffff)) {
        uVar7 = param_2;
      }
      *puVar5 = 0;
      puVar5[1] = (int)puVar5 + param_1 + 0x13 & 0xfffffffc;
      *(short *)(puVar5 + 2) = (short)param_2;
      *(short *)((int)puVar5 + 10) = (short)uVar7;
      puVar5[3] = 0x10082;
      if ((param_1 + 3 & 0xfffffffc) == 0x5d8) break;
      puVar2 = puVar5;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar4 = puVar5;
        puVar2 = puVar3;
      }
      param_2 = param_2 - (uVar7 & 0xffff) & 0xffff;
      param_1 = 0;
      puVar3 = puVar2;
      puVar4 = puVar5;
      if (param_2 == 0) {
        return puVar2;
      }
    }
  }
  else if (param_3 < 0x183) {
    if ((param_3 & 0xffffffbf) == 1) {
      puVar3 = (undefined4 *)FUN_ram_420539d4(0);
      return puVar3;
    }
  }
  else if (param_3 == 0x280) {
    puVar3 = (undefined4 *)
             FUN_ram_420530ba(((param_1 & 0xffff) + 3 & 0xfffffffc) +
                              (param_2 + 3 & 0xfffffffc) + 0x10);
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *puVar3 = 0;
    puVar3[1] = (int)puVar3 + (param_1 & 0xffff) + 0x13 & 0xfffffffc;
    *(short *)(puVar3 + 2) = (short)param_2;
    *(short *)((int)puVar3 + 10) = (short)param_2;
    puVar3[3] = 0x10080;
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

