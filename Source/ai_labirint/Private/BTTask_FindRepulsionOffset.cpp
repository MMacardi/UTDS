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
    // �������� Blackboard � AI Controller
    UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
    AAIController* AICon = OwnerComp.GetAIOwner();

    // ������� ������� AI
    FVector CurrentLocation = AICon->GetPawn()->GetActorLocation();

    // ����� ��������� ������ � ���������� TotalRepulsionForce (��� ������� ����)

    // ...

    // �������� ������� ������� ������� (������� ������ ��� ������ ����)
    FVector TargetLocation = BBComp->GetValueAsVector("TargetLocation");

    // ��������� TotalRepulsionForce � TargetLocation
    FVector NewTargetLocation = TargetLocation + TotalRepulsionForce;

    // ���������� ����� �������� � Blackboard
    BBComp->SetValueAsVector("TargetLocation", NewTargetLocation);

    return EBTNodeResult::Succeeded;
}
};
    return EBTNodeResult::Succeeded;  // ��� EBTNodeResult::Failed, ���� ���-�� ����� �� ���.
}