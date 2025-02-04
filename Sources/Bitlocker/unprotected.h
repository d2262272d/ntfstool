#pragma once

#include <WinSock2.h>
#include <Windows.h>

#include <string>
#include <memory>

#include "Utils/buffer.h"
#include "Utils/utils.h"

void get_vmk_from_unprotected_key(ULONG64 nonce_time, ULONG32 nonce_ctr, PBYTE mac_val, PBYTE enc_vmk, ULONG32 enc_size, PBYTE cleartext, PBYTE vmk);