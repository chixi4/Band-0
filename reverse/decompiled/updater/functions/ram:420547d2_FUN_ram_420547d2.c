
undefined4 * FUN_ram_420547d2(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  
  puVar4 = (undefined4 *)FUN_ram_42051500(4);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_ram_42051d02(param_2);
  }
  else {
    *(char *)((int)puVar4 + 10) = (char)param_5;
    sVar1 = *(short *)(param_2 + 8);
    *puVar4 = 0;
    puVar4[1] = param_2;
    *(ushort *)(puVar4 + 2) = sVar1 + ((ushort)param_5 & 1) * -4;
    iVar5 = FUN_ram_42051cac(param_2,0x14);
    if (iVar5 == 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x1a);
      puVar7 = *(undefined1 **)(puVar4[1] + 4);
      puVar4[3] = puVar7;
      uVar2 = FUN_ram_4205073e(uVar3);
      *puVar7 = (char)uVar2;
      uVar3 = *(undefined2 *)(param_1 + 0x1c);
      puVar7[1] = (char)((ushort)uVar2 >> 8);
      iVar5 = puVar4[3];
      uVar3 = FUN_ram_4205073e(uVar3);
      *(char *)(iVar5 + 2) = (char)uVar3;
      *(char *)(iVar5 + 3) = (char)((ushort)uVar3 >> 8);
      iVar5 = puVar4[3];
      uVar6 = FUN_ram_4205074c(param_4);
      *(char *)(iVar5 + 4) = (char)uVar6;
      *(char *)(iVar5 + 5) = (char)((uint)uVar6 >> 8);
      *(char *)(iVar5 + 7) = (char)((uint)uVar6 >> 0x18);
      *(char *)(iVar5 + 6) = (char)((uint)uVar6 >> 0x10);
      iVar8 = puVar4[3];
      uVar3 = FUN_ram_4205073e(param_3 | ((param_5 & 1) + 5) * 0x1000);
      iVar5 = puVar4[3];
      *(char *)(iVar8 + 0xc) = (char)uVar3;
      *(char *)(iVar8 + 0xd) = (char)((ushort)uVar3 >> 8);
      *(undefined1 *)(iVar5 + 0x12) = 0;
      *(undefined1 *)(iVar5 + 0x13) = 0;
      return puVar4;
    }
    FUN_ram_42052766(puVar4);
  }
  return (undefined4 *)0x0;
}

