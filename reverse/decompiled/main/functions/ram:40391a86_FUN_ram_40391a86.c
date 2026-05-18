
void FUN_ram_40391a86(void)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(int *)(gp + -0x440) != 0) {
    puVar2 = (undefined4 *)(gp + -0x450);
    uVar3 = *(uint *)(*(int *)*puVar2 + 0x5c) & 0x1ffffff;
    while (uVar3 != 0) {
      iVar4 = (*(code *)&SUB_ram_40010918)(uVar3);
      uVar8 = iVar4 - 1;
      uVar9 = 1 << (uVar8 & 0x1f);
      uVar3 = uVar3 & ~uVar9;
      uVar5 = (*(code *)&SUB_ram_40010974)
                        (*(undefined4 *)(gp + -0x438),*(undefined4 *)(gp + -0x434),uVar8);
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        *(uint *)(*(int *)*puVar2 + 0x4c) =
             *(uint *)(*(int *)*puVar2 + 0x4c) & 0xfe000000 | uVar9 & 0x1ffffff;
      }
      puVar7 = (undefined4 *)(*(int *)(gp + -0x440) + uVar8 * 8);
      pcVar6 = (code *)*puVar7;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(puVar7[1]);
      }
      if (!bVar1) {
        *(uint *)(*(int *)*puVar2 + 0x4c) =
             *(uint *)(*(int *)*puVar2 + 0x4c) & 0xfe000000 | uVar9 & 0x1ffffff;
      }
    }
  }
  return;
}

