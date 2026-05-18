
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42076e8a(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_2c [6];
  undefined1 uStack_26;
  undefined2 uStack_24;
  
  if ((param_1 != (int *)0x0) && (iVar3 = *param_1, iVar3 != 0)) {
    uVar1 = *(undefined1 *)((int)param_1 + 0x2f7);
    if (*(char *)(iVar3 + 0xa8) == '\x02') {
      if (*(int *)(iVar3 + 0xb0) != 0) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
        *(undefined4 *)(iVar3 + 0xb0) = 0;
      }
    }
    else if (param_5 == 1) {
      param_2 = param_2 + 10;
      iVar2 = (*(code *)&SUB_ram_40011f9c)(param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_42087770(param_2);
        if (iVar2 == 0) {
          FUN_ram_4207a038(1,4,3,&DAT_ram_3c0ff7f4);
          FUN_ram_42075c60(*(undefined4 *)(iVar3 + 0xec),param_2,5);
          return;
        }
      }
      else {
        if ((*(uint *)(iVar2 + 0xc) & 1) != 0) {
          FUN_ram_4039c11e(auStack_2c,iVar2 + 4,6);
          uStack_26 = (undefined1)*(undefined2 *)(iVar2 + 0x26);
          uStack_24 = 2;
          FUN_ram_4208344a(0xf,auStack_2c,10);
        }
        *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfdffffff;
      }
      *(undefined1 *)(iVar2 + 0x2f7) = uVar1;
      FUN_ram_42075b46(iVar2,0xb0,2);
      *(undefined1 *)(iVar2 + 0x136) = 1;
      *(undefined4 *)(iVar2 + 0x150) = _DAT_ram_6004d000;
      FUN_ram_4039c11e(iVar2 + 4,param_2,6);
      FUN_ram_42079c4c(iVar2,1);
      FUN_ram_42079936(iVar2 + 0x108,0);
      iVar3 = iVar2 + 0x13c;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar3);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar3);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar3,0x420662ac,iVar2);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar3,2000,1);
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x20020;
    }
    return;
  }
  FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe548,"e yourself an exit time before social plans.",0x64f)
  ;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

