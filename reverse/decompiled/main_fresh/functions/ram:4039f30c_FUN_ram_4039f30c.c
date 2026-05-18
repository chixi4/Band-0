
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_ram_4039f30c(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_2) {
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = FUN_ram_42093960(param_2);
  if (iVar3 == 1) {
    iVar3 = FUN_ram_420b218a(gp + 0x604 + param_2 * 0x14,param_3,param_1);
    return iVar3;
  }
  if (iVar3 == 2) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
    uVar2 = _DAT_ram_3fcdfdb4;
    piVar6 = (int *)(gp + 0x604 + param_2 * 0x14);
    iVar3 = *piVar6;
    if (iVar3 == 0) {
      *(short *)((uint)*(byte *)(piVar6 + 2) * 0xc + 0x3fcc4672) =
           *(short *)((uint)*(byte *)(piVar6 + 2) * 0xc + 0x3fcc4672) + 1;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(uVar2);
    }
    else {
      *piVar6 = *(int *)(iVar3 + 0x20);
      *(undefined4 *)(iVar3 + 0x20) = 0;
      piVar5 = (int *)(param_2 * 0xc + 0x3fcc4668);
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
        FUN_ram_4039c11e(puVar4[1],param_1,param_3);
      }
      puVar4 = *(uint **)(iVar3 + 0x24);
      *puVar4 = *puVar4 | *(uint *)(gp + param_2 * 0x14 + 0x608);
      puVar4[1] = puVar4[1] | 0xf;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

