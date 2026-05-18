
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42037220(void)

{
  undefined2 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x864))
                    (*_DAT_ram_3fcdfed8,1,0x104,_DAT_ram_3fcdfed8[3],&DAT_ram_3c0c27ac,
                     *(code **)(_DAT_ram_3fcdfecc + 0x864));
  if (iVar2 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0xd4,&DAT_ram_3c0f5728,0,0);
  }
  uVar4 = _DAT_ram_3fcdfed8[6];
  pcVar3 = *(code **)(_DAT_ram_3fcdfecc + 0x864);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  uVar1 = *(undefined2 *)(iVar2 + 6);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar2 = (*pcVar3)(uVar4,uVar1,*(undefined2 *)(iVar2 + 0x40),_DAT_ram_3fcdfed8[1],
                    "List edge cases early in work planning.");
  if (iVar2 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0xdb,&DAT_ram_3c0f5728,0,0);
  }
  uVar4 = _DAT_ram_3fcdfed8[7];
  pcVar3 = *(code **)(_DAT_ram_3fcdfecc + 0x864);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  uVar1 = *(undefined2 *)(iVar2 + 8);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar2 = (*pcVar3)(uVar4,uVar1,*(undefined2 *)(iVar2 + 0x40),_DAT_ram_3fcdfed8[2],"k planning.");
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4203733a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0xe2,&DAT_ram_3c0f5728,0,0);
    return;
  }
  return;
}

