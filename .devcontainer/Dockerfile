# docker build . --build-arg cores="$(nproc --all)" --tag percevalsa/mplab_ide
# docker push percevalsa/mplab_ide
FROM mcr.microsoft.com/devcontainers/base:ubuntu-22.04

# maybe libgtk-3-0 chromium libasound linss libsmime libdrm libnspr libssutil
RUN apt-get update \
    && DEBIAN_FRONTEND=noninteractive apt-get -y install --no-install-recommends \
    libusb-1.0 \
    libxi6 \
    libxtst6 \
    udev \
    x11-apps \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

ENV MPLABX_FILE "MPLABX-v6.05-linux-installer"
ENV MPLABXC_FILE "xc16-v2.10-full-install-linux64-installer.run"
ENV MPLAB_URL "https://ww1.microchip.com/downloads/aemDocuments/documents/DEV/ProductDocuments/SoftwareTools/"

RUN cd ${HOME} && \
    wget "${MPLAB_URL}${MPLABXC_FILE}" && \
    chmod +x ${MPLABXC_FILE} && \
    sudo ./${MPLABXC_FILE} --mode unattended --HostID 0 --netservername 0 && \
    rm "${MPLABXC_FILE}"

RUN cd ${HOME} && \
    wget "${MPLAB_URL}${MPLABX_FILE}.tar" && \
    tar xvf "${MPLABX_FILE}.tar" && \
    sudo ./${MPLABX_FILE}.sh --nox11 -- --mode unattended --collectInfo 0 --collectMyMicrochipInfo 0 && \
    rm "${MPLABX_FILE}.tar" "${MPLABX_FILE}.sh"

COPY z*.rules /etc/udev/rules.d/

RUN echo 'export PATH="/opt/microchip/mplabx/v6.05/mplab_platform/bin:$PATH"' >>${HOME}/.zshrc
