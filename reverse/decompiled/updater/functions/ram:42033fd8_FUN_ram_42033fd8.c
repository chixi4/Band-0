
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42033fd8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = 0x4957454e;
  uStack_34 = 0x5644;
  if (((_DAT_ram_3fcdfdd8 != 0) && (*(int *)(_DAT_ram_3fcdfdd8 + 0x150) != 0)) &&
     (param_3 <= _DAT_ram_3fcb6338)) {
    uVar1 = *(undefined1 *)((int)&uStack_38 + param_3);
    pcVar3 = *(code **)(_DAT_ram_3fcdfdd8 + 0x14c);
    uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x154))();
    (*pcVar3)(param_3,0x3c07147c,0x3c072654,uVar1,uVar2,0x3c07147c,0x3c071e68);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x150))(param_3,0x3c07147c,param_4);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x14c))(param_3,0x3c07147c,0x3c071220,0x3c071f38);
  }
  return;
}

