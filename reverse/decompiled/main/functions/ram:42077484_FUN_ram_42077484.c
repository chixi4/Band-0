
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42077484(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = _DAT_ram_3fcc4018;
  uVar5 = (uint)DAT_ram_3fcc4198;
  if ((_DAT_ram_3fcc4018 != 0) &&
     (uVar2 = *(byte *)(_DAT_ram_3fcc4018 + 0x129) & 1,
     (*(byte *)(_DAT_ram_3fcc4018 + 0x129) & 1) != 0)) {
    FUN_ram_420833a4();
    for (; uVar2 <= *(byte *)(*(int *)(gp + -0xb4) + 0x3f6); uVar2 = uVar2 + 1 & 0xff) {
      iVar4 = uVar2 * 4 + iVar1;
      if (*(int *)(iVar4 + 0xec) != 0) {
        FUN_ram_42079c4c(*(int *)(iVar4 + 0xec),1);
        FUN_ram_42075b46(*(undefined4 *)(iVar4 + 0xec),0xa0,2);
        FUN_ram_42075b46(*(undefined4 *)(iVar4 + 0xec),0xc0,2);
        iVar3 = *(int *)(iVar4 + 0xec);
        *(undefined2 *)(iVar3 + 0x3b0) = 2;
        FUN_ram_42079c4c(iVar3,0);
        FUN_ram_42087eec(*(undefined4 *)(iVar4 + 0xec));
      }
    }
    FUN_ram_42073af8(1);
    FUN_ram_420762ec(0);
    FUN_ram_420762ec(1);
    *(undefined1 *)(gp + -400) = 1;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc2720);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc2720);
    FUN_ram_420968bc();
    FUN_ram_4209241e(1,DAT_ram_3fcc4194);
    thunk_FUN_ram_42094f92(1,_DAT_ram_3fcc4190);
    if (_DAT_ram_3fcc4140 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcc4140 = 0;
    }
    if (_DAT_ram_3fcc4144 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcc4144 = 0;
    }
    FUN_ram_420925f0(1,1,0,1,(int)uVar5 >> 5 & 1,DAT_ram_3fcc4194);
    iVar4 = _DAT_ram_3fcc4018;
    iVar3 = *(int *)(_DAT_ram_3fcc4018 + 0x124);
    *(uint *)(_DAT_ram_3fcc4018 + 0xa4) = *(uint *)(_DAT_ram_3fcc4018 + 0xa4) & 0xffffffef;
    *(undefined1 *)(iVar4 + 0xa8) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xec) + 0xc) = 0;
    if (iVar3 != 0) {
      if (_DAT_ram_3fcc4178 == 0) {
        FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe4d8,"e yourself an exit time before social plans.",
                         0x1dd);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      (**(code **)(_DAT_ram_3fcc4178 + 0x20))();
      *(undefined4 *)(iVar4 + 0x124) = 0;
    }
    *(byte *)(iVar1 + 0x129) = *(byte *)(iVar1 + 0x129) & 0xfe;
    FUN_ram_4208344a(0xd,0,0);
  }
  return 0;
}

