#include "stdafx.h"
#include "CppUnitTest.h"
#include "CompositeGameEntity.h"
#include "GameEntity.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(AddEntityToComposite)
		{
			CompositeGameEntity c("Test", "TestEntity");
			Assert::IsTrue(c.getEntities().size() == 0);

			c.add(new GameEntity("entity", "entity"));
			Assert::IsTrue(c.getEntities().size() == 1);
		}

		TEST_METHOD(RemoveEntityFromComposite)
		{
			CompositeGameEntity c("Test", "TestEntity");
			GameEntity entity("entity", "entity");
			Assert::IsTrue(c.getEntities().size() == 0);

			c.add(&entity);
			Assert::IsTrue(c.getEntities().size() == 1);

			c.remove(&entity);
			Assert::IsTrue(c.getEntities().size() == 0);
		}

		TEST_METHOD(AddEntityToNonComposite)
		{
			GameEntity entity("Test", "TestEntity");
			GameEntity other_entity("entity", "entity");

			Assert::IsFalse(entity.add(&other_entity));
		}

		TEST_METHOD(GetEntityName)
		{
			GameEntity entity("Test", "TestEntity");

			Assert::AreEqual(entity.getName(),(string)"Test");
		}

	};
}