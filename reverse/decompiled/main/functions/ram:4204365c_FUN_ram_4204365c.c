
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204365c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [13];
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (param_1 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x103,&DAT_ram_3c0f6f10,0,0,param_5,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  if (param_2 == 0) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x234))(param_1);
    pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x230);
  }
  else {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x228))(param_1);
    pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x224);
  }
  iVar3 = (*pcVar4)(param_1);
  puVar1 = (undefined1 *)((iVar2 + 2) * 4 + param_1);
  (**(code **)(_DAT_ram_3fcdfecc + 0x7f0))(puVar1 + 3);
  FUN_ram_4039c11e(auStack_40,param_1 + (iVar3 + 2) * 4,0x10);
  (*(code *)&SUB_ram_40010488)(auStack_30,0,0xd);
  uStack_23 = puVar1[5];
  uStack_22 = puVar1[4];
  uStack_21 = puVar1[3];
  (**(code **)(_DAT_ram_3fcdfed0 + 0x4d4))(auStack_40);
  *puVar1 = uStack_11;
  puVar1[1] = uStack_12;
  puVar1[2] = uStack_13;
  return;
}

