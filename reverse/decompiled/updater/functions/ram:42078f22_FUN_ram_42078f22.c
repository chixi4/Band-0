
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42078f22(uint param_1,undefined1 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  iVar2 = _DAT_ram_3ff4fbbc;
  if (4 < param_1) {
    FUN_ram_42033fd8(6,0x800,1,0x3c07dea0,0x3c072f4c,0x3c079238,0x2ac);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar3 = (int *)(param_1 * 0x28 + _DAT_ram_3ff4fbbc);
  if (*(byte *)((int)piVar3 + 0x1d) < 3) {
    FUN_ram_4204b660(piVar3,param_1);
  }
  uVar1 = *(undefined1 *)((int)piVar3 + 9);
  puVar6 = *(uint **)(*piVar3 + 0x24);
  uVar5 = *puVar6;
  if (((uVar5 & 0x402) == 0) && ((uVar5 & 0x480000) != 0x400000)) {
    *(undefined1 *)(piVar3 + 2) = uVar1;
    *(undefined1 *)((int)piVar3 + 0xb) = 0;
    if ((uVar5 & 0x100) != 0) {
      *(undefined1 *)(piVar3 + 3) = 0;
    }
  }
  else {
    iVar4 = (*(code *)&SUB_ram_40011b24)();
    *(undefined1 *)(piVar3 + 2) = uVar1;
    if (iVar4 == 0) {
      *(undefined1 *)((int)piVar3 + 0xb) = 0;
    }
    else {
      *(undefined1 *)(piVar3 + 3) = 0;
    }
    param_2 = 0x7f;
  }
  *(undefined1 *)((int)puVar6 + 0xd) = param_2;
  *(undefined1 *)(iVar2 + param_1 * 0x28 + 0x12) = 5;
  *(undefined1 *)((int)puVar6 + 0x13) = 1;
  FUN_ram_4039adc8(piVar3,1,0);
  return;
}

