
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_ram_420aca52(undefined4 param_1,ushort *param_2,int param_3)

{
  short sVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  char cStack_38;
  char cStack_37;
  char cStack_34;
  char cStack_33;
  
  puVar8 = &DAT_ram_3fcb7e68;
  if (param_3 == 0) {
    FUN_ram_420aca12();
    puVar4 = &DAT_ram_3fcb7e68;
    iVar5 = 0;
    puVar2 = &DAT_ram_3fcb7e68;
    do {
      puVar3 = (undefined2 *)((int)param_2 + iVar5);
      iVar5 = iVar5 + 2;
      *puVar3 = *(undefined2 *)(puVar2 + 0x14c);
      puVar2 = puVar2 + 2;
    } while (iVar5 != 0x28);
    puVar9 = param_2 + 0x14;
    do {
      puVar7 = (ushort *)(puVar8 + 0x1aa);
      puVar6 = puVar9 + 1;
      puVar8 = puVar8 + 2;
      *puVar9 = *puVar7;
      puVar9 = puVar6;
    } while (param_2 + 0x20 != puVar6);
    param_2[0x20] = _DAT_ram_3fcb7fdc;
    param_2[0x21] = _DAT_ram_3fcb7fde;
    param_2[0x22] = _DAT_ram_3fcb7fe0;
    param_2[0x23] = _DAT_ram_3fcb7fe2;
    param_2[0x24] = _DAT_ram_3fcb7fe4;
    param_2[0x25] = _DAT_ram_3fcb7fe6;
    param_2[0x26] = _DAT_ram_3fcb8010;
    *(undefined1 *)(param_2 + 0x27) = DAT_ram_3fcb8002;
    *(undefined1 *)((int)param_2 + 0x4f) = DAT_ram_3fcb8003;
    *(undefined1 *)(param_2 + 0x28) = DAT_ram_3fcb8004;
    *(undefined1 *)((int)param_2 + 0x51) = DAT_ram_3fcb8006;
    *(undefined1 *)(param_2 + 0x29) = DAT_ram_3fcb8007;
    *(undefined1 *)((int)param_2 + 0x53) = DAT_ram_3fcb8008;
    puVar9 = param_2 + 0x2a;
    do {
      puVar8 = puVar4 + 0x180;
      puVar7 = (ushort *)((int)puVar9 + 1);
      puVar4 = puVar4 + 1;
      *(undefined1 *)puVar9 = *puVar8;
      puVar9 = puVar7;
    } while ((ushort *)((int)param_2 + 0x5d) != puVar7);
    sVar1 = 0;
  }
  else {
    puVar4 = &DAT_ram_3fcb7e68;
    puVar2 = &DAT_ram_3fcb7e68;
    puVar7 = param_2 + 0x14;
    sVar1 = 0;
    puVar9 = param_2;
    do {
      iVar5 = (*(code *)&SUB_ram_4001220c)((uint)*puVar9 - (uint)*(ushort *)(puVar2 + 0x14c));
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      iVar5 = (*(code *)&SUB_ram_4001220c)((uint)puVar9[1] - (uint)*(ushort *)(puVar2 + 0x14e));
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      puVar9 = puVar9 + 4;
      puVar2 = puVar2 + 8;
    } while (puVar7 != puVar9);
    puVar9 = param_2 + 0x20;
    puVar2 = puVar8;
    do {
      iVar5 = (*(code *)&SUB_ram_4001220c)((uint)*puVar7 - (uint)*(ushort *)(puVar2 + 0x1aa));
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      iVar5 = (*(code *)&SUB_ram_4001220c)((uint)puVar7[1] - (uint)*(ushort *)(puVar2 + 0x1ac));
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      puVar7 = puVar7 + 4;
      puVar2 = puVar2 + 8;
    } while (puVar9 != puVar7);
    puVar7 = param_2 + 0x22;
    puVar2 = puVar8;
    do {
      FUN_ram_420adfec(&cStack_38,*puVar9,0);
      FUN_ram_420adfec(&cStack_34,*(undefined2 *)(puVar2 + 0x174),0);
      iVar5 = (*(code *)&SUB_ram_4001220c)((int)cStack_38 - (int)cStack_34);
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      iVar5 = (*(code *)&SUB_ram_4001220c)((int)cStack_37 - (int)cStack_33);
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      puVar9 = puVar9 + 1;
      puVar2 = puVar2 + 2;
    } while (puVar7 != puVar9);
    puVar2 = puVar8;
    do {
      FUN_ram_420adfec(&cStack_38,*puVar7,1);
      FUN_ram_420adfec(&cStack_34,*(undefined2 *)(puVar2 + 0x178),1);
      iVar5 = (*(code *)&SUB_ram_4001220c)((int)cStack_38 - (int)cStack_34);
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      iVar5 = (*(code *)&SUB_ram_4001220c)((int)cStack_37 - (int)cStack_33);
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      puVar7 = puVar7 + 1;
      puVar2 = puVar2 + 2;
    } while (param_2 + 0x26 != puVar7);
    FUN_ram_420adfec(&cStack_38,param_2[0x26],0);
    FUN_ram_420adfec(&cStack_34,_DAT_ram_3fcb8010,0);
    iVar5 = (*(code *)&SUB_ram_4001220c)((int)cStack_38 - (int)cStack_34);
    if (4 < iVar5) {
      sVar1 = sVar1 + 1;
    }
    iVar5 = (*(code *)&SUB_ram_4001220c)((int)cStack_37 - (int)cStack_33);
    if (4 < iVar5) {
      sVar1 = sVar1 + 1;
    }
    puVar7 = param_2 + 0x27;
    puVar9 = (ushort *)((int)param_2 + 0x51);
    puVar2 = puVar8;
    do {
      iVar5 = (*(code *)&SUB_ram_4001220c)((int)(char)(byte)*puVar7 - (int)(char)puVar2[0x19a]);
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      puVar7 = (ushort *)((int)puVar7 + 1);
      puVar2 = puVar2 + 1;
    } while (puVar9 != puVar7);
    do {
      iVar5 = (*(code *)&SUB_ram_4001220c)((int)(char)(byte)*puVar9 - (int)(char)puVar8[0x19e]);
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      puVar9 = (ushort *)((int)puVar9 + 1);
      puVar8 = puVar8 + 1;
    } while (puVar9 != param_2 + 0x2a);
    do {
      iVar5 = (*(code *)&SUB_ram_4001220c)((uint)(byte)*puVar9 - (uint)(byte)puVar4[0x180]);
      if (4 < iVar5) {
        sVar1 = sVar1 + 1;
      }
      puVar9 = (ushort *)((int)puVar9 + 1);
      puVar4 = puVar4 + 1;
    } while (puVar9 != (ushort *)((int)param_2 + 0x5d));
  }
  return sVar1;
}

