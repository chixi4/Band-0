
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207a038(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = 0x4957454e;
  uStack_34 = 0x5644;
  if (((_DAT_ram_3fcdfdd8 != 0) && (*(int *)(_DAT_ram_3fcdfdd8 + 0x150) != 0)) &&
     (param_3 <= _DAT_ram_3fcc4c70)) {
    uVar1 = *(undefined1 *)((int)&uStack_38 + param_3);
    pcVar3 = *(code **)(_DAT_ram_3fcdfdd8 + 0x14c);
    uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x154))();
    (*pcVar3)(param_3,"tion.",&DAT_ram_3c0c41a8,uVar1,uVar2,"tion.",&DAT_ram_3c0c39bc);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x150))(param_3,"tion.",param_4);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x14c))
              (param_3,"tion.","space in the plan for insight.","liver steadier.");
  }
  return;
}

