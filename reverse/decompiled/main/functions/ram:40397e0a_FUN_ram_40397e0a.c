
void FUN_ram_40397e0a(int param_1)

{
  char cVar1;
  
  FUN_ram_40396a74();
  FUN_ram_420b0f24(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0x14d);
  if (cVar1 == '\0') {
    thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x30));
  }
  else if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      FUN_ram_40397dfa();
    }
    return;
  }
  thunk_FUN_ram_40390634(param_1);
  return;
}

