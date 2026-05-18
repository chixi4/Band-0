
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208283c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = _DAT_ram_3fcc4014;
    if (_DAT_ram_3fcc4014 == 0) {
LAB_ram_4208285c:
      FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe95c,"fore tasks.",0x149c);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
LAB_ram_420828bc:
    iVar1 = *(int *)(iVar1 + 0xe4);
    if (iVar1 == 0) {
LAB_ram_4208289a:
      FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fe964);
      return 0x105;
    }
  }
  else {
    if (_DAT_ram_3fcc4018 == 0) goto LAB_ram_4208285c;
    iVar1 = _DAT_ram_3fcc4018;
    if (*(int *)(param_1 + 0x14) != 1) goto LAB_ram_420828bc;
    iVar1 = (*(code *)&SUB_ram_40011f9c)(param_1 + 0x20);
    if (iVar1 == 0) goto LAB_ram_4208289a;
    if ((*(int *)(param_1 + 0x14) == 1) && ((*(byte *)(param_1 + 0x18) & 0xdf) == 0x10)) {
      if (*(char *)(param_1 + 0x26) == '\0') {
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc5e8,iVar1);
      }
      uVar3 = FUN_ram_42075b46(iVar1,*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x26)
                              );
      return uVar3;
    }
  }
  if ((*(char *)(iVar1 + 0x2f9) != '\0') && ((*(uint *)(iVar1 + 0xc) & 1) != 0)) {
    uVar4 = 0;
    if (*(char *)(param_1 + 0x18) == -0x30) {
      uVar4 = *(undefined1 *)(param_1 + 0x26);
    }
    iVar2 = FUN_ram_4208c5ae(*(char *)(param_1 + 0x18),uVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_ram_4207503a(&uStack_14,0x18,*(undefined4 *)(param_1 + 0x1c),iVar1);
      if (iVar2 == 0) goto LAB_ram_42082992;
      **(uint **)(iVar2 + 0x24) = **(uint **)(iVar2 + 0x24) | 1;
      goto LAB_ram_42082900;
    }
  }
  iVar2 = FUN_ram_42079edc(&uStack_14,0x18,*(undefined4 *)(param_1 + 0x1c));
  if (iVar2 == 0) {
LAB_ram_42082992:
    FUN_ram_4207a038(1,0x40,2,
                     "pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                    );
    return 0x101;
  }
LAB_ram_42082900:
  iVar5 = *(int *)(param_1 + 0x1c);
  *(undefined2 *)(iVar2 + 0x14) = 0x18;
  if (iVar5 != 0) {
    FUN_ram_4039c11e(uStack_14,param_1 + 0x26);
  }
  *(short *)(iVar2 + 0x16) = (short)*(undefined4 *)(param_1 + 0x1c);
  (*(code *)&SUB_ram_40011fc8)(iVar1,iVar2,7,0,0);
  uVar3 = FUN_ram_420743c0(iVar1,iVar2,*(undefined1 *)(param_1 + 0x18));
  return uVar3;
}

