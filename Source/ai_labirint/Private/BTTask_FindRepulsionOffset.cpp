// BTTask_FindRepulsionOffset.cpp

#include "BTTask_FindRepulsionOffset.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

EBTNodeResult::Type UBTTask_FindRepulsionOffset::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
UBTTask_FindRepulsionOffset: public UBTTaskNode
{
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) override
    {
    // Получить Blackboard и AI Controller
    UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
    AAIController* AICon = OwnerComp.GetAIOwner();

    // Текущая позиция AI
    FVector CurrentLocation = AICon->GetPawn()->GetActorLocation();

    // Поиск ближайших врагов и вычисление TotalRepulsionForce (как указано выше)

    // ...

    // Получить текущую целевую локацию (позицию игрока или другую цель)
    FVector TargetLocation = BBComp->GetValueAsVector("TargetLocation");

    // Применить TotalRepulsionForce к TargetLocation
    FVector NewTargetLocation = TargetLocation + TotalRepulsionForce;

    // Установить новое значение в Blackboard
    BBComp->SetValueAsVector("TargetLocation", NewTargetLocation);

    return EBTNodeResult::Succeeded;
}
};
    return EBTNodeResult::Succeeded;  // или EBTNodeResult::Failed, если что-то пошло не так.
}