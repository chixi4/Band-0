
undefined4 * FUN_ram_42053b52(uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint extraout_a2;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  if (param_3 == 0x182) {
    param_1 = param_1 & 0xffff;
    puVar4 = (undefined4 *)0x0;
    puVar5 = (undefined4 *)0x0;
    do {
      puVar6 = (undefined4 *)FUN_ram_420531dc(0xe);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_ram_4205c96c();
        cVar1 = DAT_ram_3fcc52e0;
        DAT_ram_3fcc52e0 = 1;
        FUN_ram_4205c996();
        if ((cVar1 == '\0') && (iVar7 = FUN_ram_42051ea6(0x42043934,0), iVar7 != 0)) {
          FUN_ram_4205c96c();
          DAT_ram_3fcc52e0 = 0;
          FUN_ram_4205c996();
        }
        if (puVar4 != (undefined4 *)0x0) {
          FUN_ram_42053ac4(puVar4);
        }
        return (undefined4 *)0x0;
      }
      uVar2 = 0x5d8 - (param_1 + 3 & 0xfffffffc);
      if (param_2 < (uVar2 & 0xffff)) {
        uVar2 = param_2;
      }
      *puVar6 = 0;
      puVar6[1] = (int)puVar6 + param_1 + 0x13 & 0xfffffffc;
      *(short *)(puVar6 + 2) = (short)param_2;
      *(short *)((int)puVar6 + 10) = (short)uVar2;
      puVar6[3] = 0x10082;
      if ((param_1 + 3 & 0xfffffffc) == 0x5d8) goto LAB_ram_42053b7a;
      puVar3 = puVar6;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar5 = puVar6;
        puVar3 = puVar4;
      }
      param_2 = param_2 - (uVar2 & 0xffff) & 0xffff;
      param_1 = 0;
      puVar4 = puVar3;
      puVar5 = puVar6;
    } while (param_2 != 0);
  }
  else {
    if (0x182 < param_3) goto LAB_ram_42053b82;
    if ((param_3 & 0xffffffbf) == 1) {
      puVar4 = (undefined4 *)FUN_ram_420539d4(0);
      return puVar4;
    }
LAB_ram_42053b7a:
    do {
      uVar8 = FUN_ram_4039bf1e();
      param_3 = extraout_a2;
LAB_ram_42053b82:
    } while (param_3 != 0x280);
    uVar2 = (uint)uVar8 & 0xffff;
    puVar3 = (undefined4 *)
             FUN_ram_420530ba((uVar2 + 3 & 0xfffffffc) +
                              ((int)((ulonglong)uVar8 >> 0x20) + 3U & 0xfffffffc) + 0x10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = (int)puVar3 + uVar2 + 0x13 & 0xfffffffc;
      *(short *)(puVar3 + 2) = (short)param_2;
      *(short *)((int)puVar3 + 10) = (short)param_2;
      puVar3[3] = 0x10080;
    }
  }
  return puVar3;
}

