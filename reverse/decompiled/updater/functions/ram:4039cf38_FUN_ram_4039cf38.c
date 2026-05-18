
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039cf38(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_2 - 1U < 10) {
                    /* WARNING: Could not emulate address calculation at 0x4039cf68 */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)((param_2 - 1U) * 4 + 0x3c079180))();
    return iVar3;
  }
  iVar3 = FUN_ram_4204af48(param_2);
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
      uVar2 = _DAT_ram_3fcdfdb4;
      piVar6 = (int *)(gp + 0x4d0 + param_2 * 0x14);
      iVar3 = *piVar6;
      if (iVar3 == 0) {
        *(short *)((uint)*(byte *)(piVar6 + 2) * 0xc + 0x3fcb55e2) =
             *(short *)((uint)*(byte *)(piVar6 + 2) * 0xc + 0x3fcb55e2) + 1;
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(uVar2);
      }
      else {
        *piVar6 = *(int *)(iVar3 + 0x20);
        *(undefined4 *)(iVar3 + 0x20) = 0;
        piVar5 = (int *)(param_2 * 0xc + 0x3fcb55d8);
        *piVar5 = *piVar5 + 1;
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(uVar2);
        puVar4 = *(uint **)(iVar3 + 4);
        *(short *)(iVar3 + 0x16) = (short)param_3;
        if (puVar4 != (uint *)0x0) {
          bVar1 = *(byte *)(piVar6 + 3);
          puVar4[1] = *(int *)(iVar3 + 0x10) + (uint)bVar1;
          *puVar4 = (param_3 & 0xffff) + (uint)bVar1 & 0xfff | *puVar4 & 0xfffff000;
        }
        if (param_1 != 0) {
          FUN_ram_40399daa(puVar4[1],param_1,param_3);
        }
        puVar4 = *(uint **)(iVar3 + 0x24);
        *puVar4 = *puVar4 | *(uint *)(gp + param_2 * 0x14 + 0x4d4);
        puVar4[1] = puVar4[1] | 0xf;
      }
    }
    else {
      iVar3 = 0;
    }
    return iVar3;
  }
  iVar3 = FUN_ram_42078a88(gp + 0x4d0 + param_2 * 0x14,param_3,param_1);
  return iVar3;
}

