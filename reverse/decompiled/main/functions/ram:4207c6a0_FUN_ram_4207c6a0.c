
void FUN_ram_4207c6a0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(*(int *)(param_2 + 4) + 4);
    FUN_ram_4207c664(param_1,*(undefined2 *)(iVar1 + 0x10),*(undefined2 *)(iVar1 + 0x12));
    return;
  }
  FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe7b0,&DAT_ram_3c0c426c,0x77e);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

