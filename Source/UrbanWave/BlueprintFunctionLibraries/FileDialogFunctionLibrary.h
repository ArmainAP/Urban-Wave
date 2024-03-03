// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileDialogFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class URBANWAVE_API UFileDialogFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "File Dialogs")
	static bool OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFilenames);

	UFUNCTION(BlueprintCallable, Category = "File Dialogs")
	static bool SaveFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFileName,
	                           const FString& FileTypes, TArray<FString>& OutFilenames);
};

