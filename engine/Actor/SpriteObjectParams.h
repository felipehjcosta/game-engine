//
// Created by Felipe Costa on 7/24/16.
//

#ifndef CROSSENGINEDESKTOP_SPRITEOBJECTPARAMS_H
#define CROSSENGINEDESKTOP_SPRITEOBJECTPARAMS_H

#include "Base/ActorParams.h"

struct SpriteObjectParams : public ActorParams {

    GameViewId m_ViewId;

    SpriteObjectParams();

    virtual boost::shared_ptr<IActor> VCreate(BaseGameLogic *logic) override;

    virtual boost::shared_ptr<ISceneNode> VCreateSceneNode(boost::shared_ptr<Scene> pScene) override;
};


#endif //CROSSENGINEDESKTOP_SPRITEOBJECTPARAMS_H