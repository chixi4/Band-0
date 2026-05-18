
bool FUN_ram_4202c94c(int param_1,short *param_2)

{
  bool bVar1;
  
  if (*param_2 == *(short *)(param_1 + 8)) {
    bVar1 = false;
    if (param_2[1] == *(short *)(param_1 + 10)) {
      bVar1 = true;
      if (*(char *)(param_1 + 0xc) != (char)param_2[2]) {
        return (char)param_2[2] == -1;
      }
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

