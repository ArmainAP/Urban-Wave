// Fill out your copyright notice in the Description page of Project Settings.


#include "FileDialogFunctionLibrary.h"
#include "DesktopPlatformModule.h"

bool UFileDialogFunctionLibrary::OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath,
                                                const FString& FileTypes, TArray<FString>& OutFilenames)
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (!DesktopPlatform)
	{
		return false;
	}
	
	return DesktopPlatform->OpenFileDialog(
		nullptr,
		DialogTitle,
		DefaultPath,
		TEXT(""),
		FileTypes,
		EFileDialogFlags::None,
		OutFilenames
	);
}

bool UFileDialogFunctionLibrary::SaveFileDialog(const FString& DialogTitle, const FString& DefaultPath,
                                                const FString& DefaultFileName, const FString& FileTypes,
                                                TArray<FString>& OutFilenames)
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (!DesktopPlatform)
	{
		return false;
	}

	return DesktopPlatform->SaveFileDialog(
			nullptr,
			DialogTitle,
			DefaultPath,
			DefaultFileName,
			FileTypes,
			EFileDialogFlags::None,
			OutFilenames
		);
}
