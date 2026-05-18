
undefined4 * FUN_ram_42051d86(uint param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (param_3 == 0x182) {
    param_1 = param_1 & 0xffff;
    puVar2 = (undefined4 *)0x0;
    puVar3 = (undefined4 *)0x0;
    do {
      puVar4 = (undefined4 *)FUN_ram_42051500(0xe);
      if (puVar4 == (undefined4 *)0x0) {
        if (puVar2 != (undefined4 *)0x0) {
          FUN_ram_42051d02(puVar2);
        }
        goto LAB_ram_42051dcc;
      }
      uVar5 = 0x5d8 - (param_1 + 3 & 0xfffffffc);
      if (param_2 < (uVar5 & 0xffff)) {
        uVar5 = param_2;
      }
      *puVar4 = 0;
      puVar4[1] = (int)puVar4 + param_1 + 0x13 & 0xfffffffc;
      *(short *)(puVar4 + 2) = (short)param_2;
      *(short *)((int)puVar4 + 10) = (short)uVar5;
      puVar4[3] = 0x10082;
      puVar1 = puVar4;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar3 = puVar4;
        puVar1 = puVar2;
      }
      param_2 = param_2 - (uVar5 & 0xffff) & 0xffff;
      param_1 = 0;
      puVar2 = puVar1;
      puVar3 = puVar4;
    } while (param_2 != 0);
  }
  else {
    if (param_3 < 0x183) {
      if ((param_3 & 0xffffffbf) == 1) {
        puVar2 = (undefined4 *)FUN_ram_42051c30(0);
        return puVar2;
      }
    }
    else if (param_3 == 0x280) {
      puVar2 = (undefined4 *)
               FUN_ram_4205142c(((param_1 & 0xffff) + 3 & 0xfffffffc) +
                                (param_2 + 3 & 0xfffffffc) + 0x10);
      if (puVar2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar2 = 0;
      puVar2[1] = (int)puVar2 + (param_1 & 0xffff) + 0x13 & 0xfffffffc;
      *(short *)(puVar2 + 2) = (short)param_2;
      *(short *)((int)puVar2 + 10) = (short)param_2;
      puVar2[3] = 0x10080;
      return puVar2;
    }
LAB_ram_42051dcc:
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

