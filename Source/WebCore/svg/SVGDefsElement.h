/*
 * Copyright (C) 2004, 2005 Nikolas Zimmermann <zimmermann@kde.org>
 * Copyright (C) 2004, 2005, 2006 Rob Buis <buis@kde.org>
 * Copyright (C) 2018-2019 Apple Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#pragma once

#include "SVGGraphicsElement.h"
#include <wtf/TZoneMalloc.h>

namespace WebCore {

class SVGDefsElement final : public SVGGraphicsElement {
    WTF_MAKE_TZONE_OR_ISO_ALLOCATED(SVGDefsElement);
    WTF_OVERRIDE_DELETE_FOR_CHECKED_PTR(SVGDefsElement);
public:
    static Ref<SVGDefsElement> create(const QualifiedName&, Document&);

    using PropertyRegistry = SVGPropertyOwnerRegistry<SVGDefsElement, SVGGraphicsElement>;

private:
    SVGDefsElement(const QualifiedName&, Document&);

    bool isValid() const final;
    bool supportsFocus() const final { return false; }

    RenderPtr<RenderElement> createElementRenderer(RenderStyle&&, const RenderTreePosition&) final;
};

} // namespace WebCore
