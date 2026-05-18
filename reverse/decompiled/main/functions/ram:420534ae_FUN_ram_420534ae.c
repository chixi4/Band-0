
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420534ae(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  puVar1 = (undefined1 *)register0x00002008;
  if (param_1 != 0) goto LAB_ram_420534bc;
  do {
    register0x00002008 = (BADSPACEBASE *)(puVar1 + -0x10);
    *(undefined4 *)(puVar1 + -4) = unaff_retaddr;
    unaff_retaddr = 0x420534bc;
    uVar4 = FUN_ram_4039bf1e();
LAB_ram_420534bc:
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    piVar2 = (int *)uVar4;
    puVar1 = (undefined1 *)register0x00002008;
  } while (iVar3 == 0);
  *piVar2 = iVar3;
  piVar2[1] = (int)_DAT_ram_3fcc52dc;
  _DAT_ram_3fcc52dc = piVar2;
  return;
}

