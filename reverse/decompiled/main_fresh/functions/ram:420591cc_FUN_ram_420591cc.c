
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420591cc(int param_1,undefined4 *param_2,uint param_3,undefined2 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) ||
     (iVar6 = FUN_ram_42053b52(0x36,0x135,0x280), iVar6 == 0)) {
    iVar6 = 0;
  }
  else {
    if (*(ushort *)(iVar6 + 10) < 0x135) {
      FUN_ram_4039bf1e();
    }
    if ((param_3 != 3) || (*(char *)((int)param_2 + 5) == '\x03')) {
      if (*(char *)((int)param_2 + 6) == '\0') {
        _DAT_ram_3fcc5338 = FUN_ram_403926c4();
      }
      *param_2 = _DAT_ram_3fcc5338;
    }
    puVar2 = *(undefined1 **)(iVar6 + 4);
    (*(code *)&SUB_ram_40010488)(puVar2,0,0x135);
    *puVar2 = 1;
    puVar2[1] = 1;
    puVar2[2] = *(undefined1 *)(param_1 + 0x38);
    uVar3 = FUN_ram_420523b8(*param_2);
    puVar2[5] = (char)((uint)uVar3 >> 8);
    puVar2[6] = (char)((uint)uVar3 >> 0x10);
    puVar2[7] = (char)((uint)uVar3 >> 0x18);
    puVar2[4] = (char)uVar3;
    if (((400U >> (param_3 & 0x1f) & 1) != 0) ||
       ((param_3 == 3 && ((byte)(*(char *)((int)param_2 + 5) - 4U) < 2)))) {
      puVar2[0xc] = *(undefined1 *)(param_1 + 4);
      puVar2[0xd] = *(undefined1 *)(param_1 + 5);
      puVar2[0xe] = *(undefined1 *)(param_1 + 6);
      puVar2[0xf] = *(undefined1 *)(param_1 + 7);
    }
    puVar5 = (undefined1 *)(param_1 + 0x32);
    puVar4 = puVar2 + 0x1c;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (puVar5 != (undefined1 *)(param_1 + 0x38));
    puVar2[0xec] = 99;
    puVar2[0xef] = 99;
    puVar2[0xed] = 0x82;
    puVar2[0xf0] = 0x35;
    puVar2[0xee] = 0x53;
    puVar2[0xf1] = 1;
    puVar2[0xf2] = (char)param_3;
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = 3;
    }
  }
  return iVar6;
}

