// BTTask_FindRepulsionOffset.h

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindRepulsionOffset.generated.h"

UCLASS()
class YOURPROJECT_API UBTTask_FindRepulsionOffset : public UBTTask_BlackboardBase
{
    GENERATED_BODY()

public:
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};